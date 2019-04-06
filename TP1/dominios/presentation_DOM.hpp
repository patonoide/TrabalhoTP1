#ifndef DOM_PRESENTATION_H
#define DOM_PRESENTATION_H

#include "abstract_DOM.hpp"

class CodigoApresentacao : public Abstracts::Codigo{
  private:
  public:
    void setCodigo(string);// throw(invalid_argument);
    string getCodigo();

};

class Data : public Abstracts::Data{
  private:
  public:
    void setData(string);// throw(invalid_argument);
    string getData();
};

class Horario{
  private:
    string horario;
  public:

};

class Preco{
  private:
    float preco;
  public:

};

class NumeroSala :public Abstracts::Numero{
  private:
  public:
  void setNumero(int);// throw(invalid_argument);
  int getNumero();

};

class Disponibilidade{
  private:
    int disponibilidade;
  public:
  
};

#endif