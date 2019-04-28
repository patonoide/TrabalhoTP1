#ifndef DOM_PRESENTATION_H
#define DOM_PRESENTATION_H

#include "abstract_DOM.hpp"


/**
 * @brief Classe representante do Dominio codigo de aprensentação.
 * 
 * Pode armazenar uma string no formato de código de apresentação, fazendo validações necessárias e devolvendo erros caso não se consiga perpetuar o valor na classe.. 
 * 
 * Códigos de Apresentação devem ser composto de números entre 0 e 9, e tem um tamanho específico de 4 digitos.
 * Para armazenar algum valor, deve-se usar a função setValor(), passando como paramêtro a string que esteja sendo requerida.
 * Para utilizar-se de um valor salvo, deve-se usar a função getValor().
 */
class CodigoApresentacao : public Abstracts::Codigo{
  public:
    static const string classname;
    /**
     * @brief Constrói uma nova instacia do Codigo Seguranca, 
     * com o tamanho do codigo sendo como 4. 
     */
    CodigoApresentacao(){
      TAMANHO = 4;
    }
};

/**
 * @brief Classe representante do Dominio Data.
 * 
 * Pode armazenar uma string no formato de data, fazendo validações necessárias e devolvendo erros caso não se consiga perpetuar o valor na classe. 
 * 
 * Data deve estar no formato DD/MM/AA. DD é número de 1 e 31. MM é número de 1 e 12. 
 * AA énúmero de 00 a 99.
 * Para armazenar algum valor, deve-se usar a função setValor(), passando como paramêtro a string que esteja sendo requerida.
 * Para utilizar-se de um valor salvo, deve-se usar a função getValor().
 */
class Data: public Abstracts::Dominio{
  protected:
    void validarValor(string);    ///< Verifica se a string passada é válida, devolvendo erros caso não seja
  public:
    static const string classname;
    void setValor(string);        ///< Valida e posteriormente efetiva valor da string passada, caso seja válida, e retorna erro caso contrário
    string getValor();            ///< Retorna atributo "valor" da instancia
};

/**
 * @brief Classe representante do Dominio Horário.
 * 
 * Pode armazenar uma string no formato de horario, fazendo validações necessárias e devolvendo erros caso não se consiga perpetuar o valor na classe. 
 * 
 * Horário deve estar no formato HH:MM onde HH é número de 07 a 22 e MM é 00, 15, 30 ou 45.
 * Para armazenar algum valor, deve-se usar a função setValor(), passando como paramêtro a string que esteja sendo requerida.
 * Para utilizar-se de um valor salvo, deve-se usar a função getValor().
 */
class Horario: public Abstracts::Dominio{
  protected:
    void validarValor(string); ///< Verifica se a string passada é válida, devolvendo erros caso não seja
  public:
    static const string classname;
    void setValor(string);     ///< Valida e posteriormente efetiva valor da string passada, caso seja válida, e retorna erro caso contrário
    string getValor();         ///< Retorna atributo "valor" da instancia
};

/**
 * @brief Classe representante do Dominio Preco.
 * 
 * Pode armazenar uma string no formato de Preco, fazendo validações necessárias e devolvendo erros caso não se consiga perpetuar o valor na classe. 
 * 
 * Preços devem estar no formato "XXX,XX", onde podem haver quantos X forem necessários, contanto que X seja um numeral entre 0 e 9.
 * Para armazenar algum valor, deve-se usar a função setValor(), passando como paramêtro a string que esteja sendo requerida.
 * Para utilizar-se de um valor salvo, deve-se usar a função getValor().
 */
class Preco: public Abstracts::Dominio{
   protected:
    void validarValor(string); ///< Verifica se a string passada é válida, devolvendo erros caso não seja
  public:
    static const string classname;
    void setValor(string);     ///< Valida e posteriormente efetiva valor da string passada, caso seja válida, e retorna erro caso contrário
    string getValor();         ///< Retorna atributo "valor" da instancia

};

/**
 * @brief Classe representante do Dominio número de sala.
 * 
 * Pode armazenar uma string no formato de número de sala, fazendo validações necessárias e devolvendo erros caso não se consiga perpetuar o valor na classe. 
 * 
 * Número de salas devem ser do tipo string que contém um número inteiro entre 0 e 10.
 * Para armazenar algum valor, deve-se usar a função setValor(), passando como paramêtro a string que esteja sendo requerida.
 * Para utilizar-se de um valor salvo, deve-se usar a função getValor().
 */
class NumeroSala: public Abstracts::Dominio{
  protected:
    void validarValor(string); ///< Verifica se a string passada é válida, devolvendo erros caso não seja
  public:
    static const string classname;
    void setValor(string);     ///< Valida e posteriormente efetiva valor da string passada, caso seja válida, e retorna erro caso contrário
    string getValor();         ///< Retorna atributo "valor" da instancia

};

/**
 * @brief Classe representante do Dominio Disponiblidade.
 * 
 * Pode armazenar uma string no formato de disponibilidade, fazendo validações necessárias e devolvendo erros caso não se consiga perpetuar o valor na classe. 
 * 
 * Disponibilidades devem ser do tipo string que contém um número inteiro entre 0 e 250.
 * Para armazenar algum valor, deve-se usar a função setValor(), passando como paramêtro a string que esteja sendo requerida.
 * Para utilizar-se de um valor salvo, deve-se usar a função getValor().
 */
class Disponibilidade: public Abstracts::Dominio{
  protected:
    void validarValor(string); ///< Verifica se a string passada é válida, devolvendo erros caso não seja
  public:
    static const string classname;
    void setValor(string);     ///< Valida e posteriormente efetiva valor da string passada, caso seja válida, e retorna erro caso contrário
    string getValor();         ///< Retorna atributo "valor" da instancia
};

#endif