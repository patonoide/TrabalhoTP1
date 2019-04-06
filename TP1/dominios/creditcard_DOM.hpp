#ifndef DOM_CREDITCARD_H
#define DOM_CREDITCARD_H

#include "abstract_DOM.hpp"

class DataValidade{
  private:
    string data;
    string mes;
    string ano;
    void validarData(string);
  public:
    void setData(string);// throw(invalid_argument);
    string getData();
    string getMes();
    string getAno();
};


class CodigoSeguranca : public Abstracts::Codigo{
  public:
    CodigoSeguranca(){
      TAMANHO = 3;
    }
};


class NumeroCartao : public Abstracts::Numero{
  private:
  public:
    void setNumero(int);// throw(invalid_argument);
    int getNumero();
};


#endif