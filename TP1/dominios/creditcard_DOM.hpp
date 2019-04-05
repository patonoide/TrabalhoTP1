#ifndef DOM_CREDITCARD_H
#define DOM_CREDITCARD_H

#include "abstract_DOM.hpp"

class DataValidade : public Abstracts::Data{
  private:
  public:
    void setData(string);// throw(invalid_argument);
    string getData();
};


class CodigoSeguranca : public Abstracts::Codigo{
  private:
  public:
    void setCodigo(string);// throw(invalid_argument);
    string getCodigo();
    
};


class NumeroCartao : public Abstracts::Numero{
  private:
  public:
    void setNumero(int);// throw(invalid_argument);
    int getNumero();
};


#endif