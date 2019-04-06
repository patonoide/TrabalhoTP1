#ifndef DOM_ABSTRACT_H
#define DOM_ABSTRACT_H

#include<string>   // Incluindo biblioteca para uso de string
using std::string;

// Criando Classes puramente abstratas para servirem de base 
// Com uma interface padronizada
namespace Abstracts{

  // Todas os metodos devem possuir ou {} ou = 0
  // Pois se não não são consideradas classes puramente abstratas
  // reference: https://en.wikibooks.org/wiki/C%2B%2B_Programming/Classes/Abstract_Classes
  
  class Codigo{
    protected:
      string codigo;
      int TAMANHO;
      void validarCodigo(string);
    public:
      int MaxTam();
      void setCodigo(string);// throw(invalid_argument){};
      string getCodigo();
  };

  class Numero{
    private:
      int numero;
    public:
      virtual void setNumero(int)=0;// throw(invalid_argument){};
      virtual int getNumero()=0;

  };

} // Abstracts

#endif