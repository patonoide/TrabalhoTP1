// #include "persistence.hpp"
//
// void Persistence::conectarBanco(){
//
//   bool rc;
//   rc = sqlite3_open("tp1.db", &db);
//
//    if( !rc ) {
//
//       throw std::invalid_argument("Erro ao abrir o banco");
//
//    }
// }
//
// void Persistence::desconectarBanco(){
//
//   sqlite3_close(db);
//
// }
// #include "persistence.hpp"
//
// int Persistence::n = 0;
// Persistence* Persistence::p = NULL;
//
//
// Persistence::Persistence(){
//
// }
//
//
// Persistence* Persistence::criar(){
//
//         if(n==0) {
//                 n++;
//                 p = new Persistence();
//         }
//         return p;
//
// }
