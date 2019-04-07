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
  
  /**
   * @brief Classe Base para criação de codigos
   */
  class Codigo{
    protected:
      string codigo;              ///< Atributo Primário
      int TAMANHO;                ///< Tamanho do código
      void validarCodigo(string); ///< Verifica se parametro passado é valido, devolvendo erro std::invalid_argument caso não seja
    public:
      int MaxTam();               ///< Retorna váriavel de instancia TAMANHO
      void setCodigo(string str); ///< Verifica se string é válida, e salva-o no atributo codigo
      string getCodigo();         ///< Retorna valor do codigo
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