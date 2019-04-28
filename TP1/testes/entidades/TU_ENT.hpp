#ifndef TESTE_UNIDADE_ENT_H
#define TESTE_UNIDADE_ENT_H

#include "../testes.hpp"

class TUTicket{
  private:
    Ticket testando;
    Testes estado;
  public:
    void setCodigoValido(CodigoIngresso &valid);
    void runTestes();
};


#endif