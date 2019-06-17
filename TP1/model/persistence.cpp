#include "persistence.hpp"
void Persistence::conectarBanco(){

  bool rc;
  rc = sqlite3_open("tp1.db", &db);

   if( !rc ) {

      throw std::invalid_argument("Erro ao abrir o banco");

   }
}

void Persistence::desconectarBanco(){

  sqlite3_close(db);
  

}
