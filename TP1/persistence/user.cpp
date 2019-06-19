#include "user.hpp"




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

        comandoSQL = "SELECT * FROM user WHERE (cpf =";
        comandoSQL += "'"+ cpf +"')";




}

int UserPer::callback(void *NotUsed, int argc, char **argv, char **azColName)
{
        int i;
        for(i=0; i<argc; i++)
        {
                cout<<azColName[i]<<" = " << (argv[i] ? argv[i] : "NULL")<<"\n";
        }
        cout<<"\n";
        return 0;
}
