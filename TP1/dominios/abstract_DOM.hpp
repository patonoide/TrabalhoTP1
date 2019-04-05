#ifndef DOM_ABSTRACT_H
#define DOM_ABSTRACT_H

#include <iostream>   // Incluindo biblioteca para uso de string
using namespace std;

// Criando Classes puramente abstratas para servirem de base 
// Com uma interface padronizada
namespace Abstracts{

  // Todas os metodos devem possuir ou {} ou = 0
  // Pois se não não são consideradas classes puramente abstratas
  // reference: https://en.wikibooks.org/wiki/C%2B%2B_Programming/Classes/Abstract_Classes
  
  class Data{
    private:
      string data;
    public:
      virtual void setData(string) throw(invalid_argument){};
      virtual string getData()=0;
  };

  class Codigo{
    private:
      string codigo;
    public:
      virtual void setCodigo(string) throw(invalid_argument){};
      virtual string getCodigo()=0;
      
  };

  class Numero{
    private:
      int numero;
    public:
      virtual void setNumero(int) throw(invalid_argument){};
      virtual int getNumero()=0;

  };

} // Abstracts

#endif