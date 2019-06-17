#ifndef MODEL_H
#define MODEL_H
#include <iostream>
#include <sqlite3.h>



class Persistence {

protected:
sqlite3 *db;
void conectarBanco();
void desconectarBanco(sqlite3 &db);



};

#endif
