#ifndef DOM_PRESENTATION_H
#define DOM_PRESENTATION_H

#include "TP1/dominios/abstractDOM.hpp"

class CodigoEvento : public Abstracts::Codigo{
  private:
    string codigo;

  public:

};

class Data : public Abstracts::Data{
  private:
    string data;

  public:

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

};

class Disponibilidade{
  private:
    int disponibilidade;

  public:
  
};


#endif