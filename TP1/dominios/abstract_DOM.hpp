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
   * @brief Classe para padronizar todos os dominios
   */
  class Dominio{
    protected:
      string valor;                                 ///< Atributo Primário dos domínios que herdem dessa classe
      virtual void validarValor(string aValidar)=0; ///< Verifica se parametro passado é valido, devolvendo erro std::invalid_argument caso não seja
    public:
      virtual void setValor(string str)=0;          ///< Verifica se string é válida, e salva-o no atributo valor
      virtual string getValor()=0;                  ///< Retorna atributo valor
  };
  
  /**
   * @brief Classe Base para criação de codigos
   */
  class Codigo : public Dominio{
    protected:
      int TAMANHO;                        ///< Tamanho do código
      void validarValor(string aValidar); ///< Verifica se parametro passado é valido, devolvendo erro std::invalid_argument caso não seja
    public:
      static const string classname;      ///< Nome da classe
      int MaxTam();                       ///< Retorna váriavel de instancia TAMANHO
      void setValor(string str); 
      string getValor();                  ///< Retorna valor do codigo
  };
} // Abstracts

#endif