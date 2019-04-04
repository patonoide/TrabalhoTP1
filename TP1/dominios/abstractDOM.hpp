#ifndef DOM_ABSTRACT_H
#define DOM_ABSTRACT_H

#include <iostream>   // Incluindo biblioteca para uso de string
using namespace std;

namespace Abstracts{

  class Data{
    private:
      string data;
    public:
      virtual void setData(string data);
      virtual string getData();
  };

  class Codigo{
    private:
      string codigo;
    public:
      virtual void setCodigo(string codigo);
      virtual string getCodigo();
      
  };
  class Numero{
    private:
      int numero;
    public:
      virtual void setNumero(int numero);
      virtual int getNumero();

  };

} // Abstracts

#endif