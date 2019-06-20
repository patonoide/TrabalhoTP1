#include "user.hpp"



list<User> UserPer::lista;

UserPer::UserPer(){
        conectarBanco();
}

void UserPer::cadastrar(User user) {
        string comandoSQL;
        string message;
        int rc;

        comandoSQL = "INSERT INTO user VALUES (";
        comandoSQL += "'" + user.getCpf().getValor() + "', ";
        comandoSQL += "'" + user.getSenha().getValor() + "') ";

        rc = sqlite3_exec(db, comandoSQL.c_str(), NULL, NULL, NULL);

        if( rc != SQLITE_OK ) {

                throw std::invalid_argument("Erro ao salvar no banco");
        }
        desconectarBanco();

}

void UserPer::excluir(User user){
        string comandoSQL;
        string message;
        int rc;

        comandoSQL = "DELETE FROM user WHERE (cpf =";
        comandoSQL += "'"+ user.getCpf().getValor() +"')";

        rc = sqlite3_exec(db, comandoSQL.c_str(), NULL, NULL, NULL);

        if( rc != SQLITE_OK ) {

                throw std::invalid_argument("Erro ao excluir do banco");
        }
        desconectarBanco();
}

list<User> UserPer::pesquisarporCPF(string cpf){
        list<User> list;
        string comandoSQL;
        int rc;
        comandoSQL = "SELECT * FROM user WHERE (cpf =";
        comandoSQL += "'"+ cpf +"')";

        rc = sqlite3_exec(db, comandoSQL.c_str(), callback, NULL, NULL);

        if( rc != SQLITE_OK ) {

                throw std::invalid_argument("Erro ao excluir do banco");
        }
        desconectarBanco();

        return lista;


}

int UserPer::callback(void *NotUsed, int argc, char **argv, char **azColName){
        int i;
        string argvalue;
        string colvalue;
        for(i=0; i<argc; i++)
        {
                User user;
                Cpf cpf;
                Senha senha;
                argvalue = argv[i];
                colvalue = azColName[i];
                if (colvalue == "CPF") {
                        cpf.setValor(argvalue);
                        user.setCpf(cpf);
                }
                if(colvalue == "Senha") {
                        senha.setValor(argvalue);
                        user.setSenha(senha);
                        lista.push_back(user);
                }
                delete &user;

        }
        
        return 0;
}
