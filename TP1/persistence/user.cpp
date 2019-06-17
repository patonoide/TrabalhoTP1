#include "user.hpp"


UserPer::UserPer(){
        conectarBanco();
}

void UserPer::cadastrar(User user) {
        std::string comandoSQL;
        comandoSQL = "INSERT INTO user VALUES (";
        comandoSQL += "'" + user.getCpf().getValor() + "', ";
        comandoSQL += "'" + user.getSenha().getValor() + "') ";
      



        // bool rc = sqlite3_exec(db, , callback, 0, &mensagem);
        // if(rc != SQLITE_OK) {
        //         if (mensagem)
        //                 free(mensagem);
        //         throw EErroPersistencia("Erro na execucao do comando SQL");
        // }
}
