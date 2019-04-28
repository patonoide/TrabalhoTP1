#ifndef DOM_CREDITCARD_H
#define DOM_CREDITCARD_H

#include "abstract_DOM.hpp"


/**
 * @brief Classe representante do Dominio Data de Validade.
 * 
 * Pode armazenar uma string no formato de uma data, fazendo validações necessárias e devolvendo erros caso não se consiga perpetuar o valor na classe. 
 * 
 * Datas de Validades devem ser estar o formato XX/YY, de forma que XX seja um número entre 01 e 12, e YY seja um numero entre 00 e 99.
 * Para armazenar algum valor, deve-se usar a função setValor(), passando como paramêtro a string que esteja sendo requerida.
 * Para utilizar-se de um valor salvo, deve-se usar a função getValor().
 */
class DataValidade: public Abstracts::Dominio{
  protected:
    string mes;                ///< Mês correspondente ao atributo primário (valor)
    string ano;                ///< Ano correspondente ao atributo primário (valor
    void validarValor(string); ///< Verifica se a string passada é válida, devolvendo erros caso não seja
  public:
    static const string classname;
    void setValor(string);     ///< Valida e posteriormente efetiva valor da string passada, caso seja válida, e retorna erro caso contrário 
    string getValor();         ///< Retorna atributo "valor" da instancia
    string getMes();           ///< Retorna atributo mês da instancia
    string getAno();           ///< Retorna atributo ano da instancia
};

/**
 * @brief Classe representante do Dominio Codigo de Segurança.
 * 
 * Pode armazenar uma string no formato de um código, fazendo validações necessárias e devolvendo erros caso não se consiga perpetuar o valor na classe. 
 * 
 * Códigos de Seguranças devem ser composto de números entre 0 e 9, e tem um tamanho específico de 3 digitos.
 * Para armazenar algum valor, deve-se usar a função setValor(), passando como paramêtro a string que esteja sendo requerida.
 * Para utilizar-se de um valor salvo, deve-se usar a função getValor().
 */
class CodigoSeguranca : public Abstracts::Codigo{
  public:
    static const string classname;
    /**
     * @brief Constrói uma nova instacia do Codigo Seguranca, 
     * com o tamanho do codigo sendo como 3. 
     */
    CodigoSeguranca(){
      TAMANHO = 3;
    }
};

/**
 * @brief Classe representante do Dominio Numero de Cartão.
 * 
 * Pode armazenar uma string no formato de um número de cartão, fazendo validações necessárias e devolvendo erros caso não se consiga perpetuar o valor na classe. 
 * composto de números entre 0 e 9, e tem um tamanho específico de 3 digitos.
 * Números de cartão composto de números entre 0 e 9, e tem um tamanho específico de 3 digitos.devem ser estar no formato XXXXXXXXXXXXXXXX onde X é dígito (0 – 9). Número válido deve também ser válido segundo o algoritmo de Luhn.
 * Para armazenar algcomposto de números entre 0 e 9, e tem um tamanho específico de 3 digitos.um valor, deve-se usar a função setValor(), passando como paramêtro a string que esteja sendo requerida.
 * Para utilizar-se dcomposto de números entre 0 e 9, e tem um tamanho específico de 3 digitos.e um valor salvo, deve-se usar a função getValor().
 */
class NumeroCartao : public Abstracts::Dominio{
  protected:
    void validarValor(string);     ///< Verifica se a string passada é válida, devolvendo erros caso não seja
  public:
    static const string classname;
    void setValor(string);         ///< Valida e posteriormente efetiva valor da string passada, caso seja válida, e retorna erro caso contrário 
    string getValor();             ///< Retorna atributo "valor" da instancia
};


#endif