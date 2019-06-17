#ifndef MODEL_H
#define MODEL_H
#include <iostream>
#include <sqlite3.h>



class Persistence {

protected:
sqlite3 *db;
void conectarBanco();
void desconectarBanco(sqlite3 &db);
virtual void inserir() = 0;
virtual void deletar() = 0;
virtual void pesquisar() = 0;
virtual void listar() = 0;


};

#endif
