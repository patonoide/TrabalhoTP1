#ifndef TESTE_UNIDADE_ENT_H
#define TESTE_UNIDADE_ENT_H

#include "../testes.hpp"

class TUTicket{
  private:
    Ticket testando;
    Testes estado;
    void setCodigoValido(CodigoIngresso &valid);
  public:
    void runTestes();
};

class TUCreditCard{
  private:
    Card testando;
    Testes estado;
    void setDataValida(DataValidade &valid);
    void setCodigoValido(CodigoSeguranca &valid);
    void setNumeroCartao(NumeroCartao &valid);
  public:
    void runTestes();
};

class TUPresentation{
  private:
  Presentation testando;
  Testes estado;
  void testeDataValida(Data& valid);
  void testeCodigoApresentacaoValida(CodigoApresentacao& valid);
  void testeHorarioValida(Horario& valid);
  void testePrecoValida(Preco& valid);
  void testeNumeroSalaValida(NumeroSala& valid);
  void testeDisponibilidadeValida(Disponibilidade& valid);
  public:
  void runTestes();
};

#endif