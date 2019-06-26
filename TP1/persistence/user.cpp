#include "user.hpp"

list<User> UserPer::lista;

int UserPer::n = 0;
UserPer* UserPer::u = NULL;
UserPer::UserPer(){}

UserPer* UserPer::criar(){
        if(n == 0) {
                n++;
                u = new UserPer();
        }
        return u;
}


void UserPer::addUser(User user){
        lista.push_back(user);
}

void UserPer::deleteUser(Cpf cpf){

        list<User>::iterator it;
        list<User>::iterator ittemp;
        CardPer *card = CardPer::criar();
        card->removeCardwithUser(cpf);
        TicketPer *ticket = TicketPer::criar();
        ticket->removeTicketwithUser(cpf);
        EventoPer *event = EventoPer::criar();
        event->removeEventwithUser(cpf);

        for (it = lista.begin(); it != lista.end();) {

                if((*it).getCpf().getValor() == cpf.getValor()) {
                        ittemp = it++;
                        lista.erase(it);
                        it = ittemp;
                }else{

                        it++;
                }

        }
}

list<User> UserPer::listUser(){
        return lista;
}

User UserPer::searchUser(Cpf cpf){

        list<User>::iterator it;
        User result;

        for (it = lista.begin(); it != lista.end();) {

                if((*it).getCpf().getValor() == cpf.getValor()) {

                        return (*it);
                }else{

                        it++;
                }

        }
        throw std::invalid_argument("Não existe");
}

User UserPer::editarUser(User user){
  list<User>::iterator it;
  Senha senha;

  for (it = lista.begin(); it != lista.end();) {

          if((*it).getCpf().getValor() == user.getCpf().getValor()) {
                  senha = user.getSenha();
                  (*it).setSenha(senha);
                
                  return (*it);
          }else{

                  it++;
          }

  }
  throw std::invalid_argument("Não existe");
}
// #include "user.hpp"
//
//
//
// list<User> UserPer::lista;
//
// UserPer::UserPer(){
//         conectarBanco();
// }
//
// void UserPer::cadastrar(User user) {
//         string comandoSQL;
//         string message;
//         int rc;
//
//         comandoSQL = "INSERT INTO user VALUES (";
//         comandoSQL += "'" + user.getCpf().getValor() + "', ";
//         comandoSQL += "'" + user.getSenha().getValor() + "') ";
//
//         rc = sqlite3_exec(db, comandoSQL.c_str(), NULL, NULL, NULL);
//
//         if( rc != SQLITE_OK ) {
//
//                 throw std::invalid_argument("Erro ao salvar no banco");
//         }
//         desconectarBanco();
//
// }
//
// void UserPer::excluir(User user){
//         string comandoSQL;
//         string message;
//         int rc;
//
//         comandoSQL = "DELETE FROM user WHERE (cpf =";
//         comandoSQL += "'"+ user.getCpf().getValor() +"')";
//
//         rc = sqlite3_exec(db, comandoSQL.c_str(), NULL, NULL, NULL);
//
//         if( rc != SQLITE_OK ) {
//
//                 throw std::invalid_argument("Erro ao excluir do banco");
//         }
//         desconectarBanco();
// }
//
// list<User> UserPer::pesquisarporCPF(string cpf){
//         list<User> list;
//         string comandoSQL;
//         int rc;
//         comandoSQL = "SELECT * FROM user WHERE (cpf =";
//         comandoSQL += "'"+ cpf +"')";
//
//         rc = sqlite3_exec(db, comandoSQL.c_str(), callback, NULL, NULL);
//
//         if( rc != SQLITE_OK ) {
//
//                 throw std::invalid_argument("Erro ao excluir do banco");
//         }
//         desconectarBanco();
//
//         return lista;
//
//
// }
//
// int UserPer::callback(void *NotUsed, int argc, char **argv, char **azColName){
//         int i;
//         string argvalue;
//         string colvalue;
//         for(i=0; i<argc; i++)
//         {
//                 User user;
//                 Cpf cpf;
//                 Senha senha;
//                 argvalue = argv[i];
//                 colvalue = azColName[i];
//                 if (colvalue == "CPF") {
//                         cpf.setValor(argvalue);
//                         user.setCpf(cpf);
//                 }
//                 if(colvalue == "Senha") {
//                         senha.setValor(argvalue);
//                         user.setSenha(senha);
//                         lista.push_back(user);
//                 }
//                 delete &user;
//
//         }
//
//         return 0;
// }
