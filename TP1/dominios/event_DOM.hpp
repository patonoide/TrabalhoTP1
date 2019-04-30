#ifndef DOM_EVENT_H
#define DOM_EVENT_H

#include "abstract_DOM.hpp"
#include <string>   // Incluindo biblioteca para uso de string
using std::string;
#include <iostream>



class CodigoEvento: public Abstracts::Codigo{
  public:
    static const string classname;
    /**
     * @brief Constrói uma nova instacia do Codigo Seguranca,
     * com o tamanho do codigo sendo como 3.
     *
     */
    CodigoEvento(){
      TAMANHO = 3;
    }
};

/**
 * @brief Classe representante do Dominio Nome.
 *
 * Pode armazenar uma string no formato de Nome, fazendo validações necessárias e devolvendo erros caso não se consiga perpetuar o valor na classe.
 *
 * Formato XXXXXXXXXXXXXXXXXXXX onde cada X pode ser letra, dígito ou espaço. Pelos menos um caracter é letra. Não podem existir espaços em sequência.
 * Para armazenar algum valor, deve-se usar a função setValor(), passando como paramêtro a string que esteja sendo requerida.
 * Para utilizar-se de um valor salvo, deve-se usar a função getValor().
 */
class Name: public Abstracts::Dominio{

private:
    string name;
    void validarValor(string); ///< Verifica se a string passada é válida, devolvendo erros caso não seja
public:
    static const string classname;
    string getValor(); ///< Retorna atributo "valor" da instancia
    void setValor(string); ///< Valida e posteriormente efetiva valor da string passada, caso seja válida, e retorna erro caso contrário

};


/**
 * @brief Classe representante do Dominio Cidade.
 *
 * Pode armazenar uma string no formato de Cidade, fazendo validações necessárias e devolvendo erros caso não se consiga perpetuar o valor na classe.
 *
 * Formato XXXXXXXXXXXXXXX . Cada X pode ser letra, espaço ou ponto. Pelos menos um caracter é letra. Não há espaços seguidos. Ponto é precedido por letra.
 * Para armazenar algum valor, deve-se usar a função setValor(), passando como paramêtro a string que esteja sendo requerida.
 * Para utilizar-se de um valor salvo, deve-se usar a função getValor().
 */
class Cidade: public Abstracts::Dominio{

private:
    string cidade;
    void validarValor(string); ///< Verifica se a string passada é válida, devolvendo erros caso não seja
public:
    static const string classname;
    string getValor(); ///< Retorna atributo "valor" da instancia
    void setValor(string); ///< Valida e posteriormente efetiva valor da string passada, caso seja válida, e retorna erro caso contrário

};


/**
 * @brief Classe representante do Dominio Estado.
 *
 * Pode armazenar uma string no formato de Estado, fazendo validações necessárias e devolvendo erros caso não se consiga perpetuar o valor na classe.
 *
 * AC, AL, AP, AM, BA, CE, DF, ES, GO, MA, MT, MS, MG, PA, PB, PR, PE, PI, RJ, RN, RS, RO, RR, SC, SP, SE, TO
 * Para armazenar algum valor, deve-se usar a função setValor(), passando como paramêtro a string que esteja sendo requerida.
 * Para utilizar-se de um valor salvo, deve-se usar a função getValor().
 */
class Estado: public Abstracts::Dominio{

private:
    string estado;
    void validarValor(string); ///< Verifica se a string passada é válida, devolvendo erros caso não seja
public:
    static const string classname;
    string getValor(); ///< Retorna atributo "valor" da instancia
    void setValor(string);  ///< Valida e posteriormente efetiva valor da string passada, caso seja válida, e retorna erro caso contrário

};

/**
 * @brief Classe representante do Dominio Classe.
 *
 * Pode armazenar uma string no formato de Classe, fazendo validações necessárias e devolvendo erros caso não se consiga perpetuar o valor na classe.
 *
 * Formato X onde X é dígito de 1 a 4. O dígito 1 identifica TEATRO, 2 identifica ESPORTE, 3 identifica SHOW NACIONAL e 4 identifica SHOW INTERNACIONAL
 * Para armazenar algum valor, deve-se usar a função setValor(), passando como paramêtro a string que esteja sendo requerida.
 * Para utilizar-se de um valor salvo, deve-se usar a função getValor().
 */
class Classe: public Abstracts::Dominio{

private:
    string classe;
    void validarValor(string);  ///< Verifica se a string passada é válida, devolvendo erros caso não seja
public:
    static const string classname;
    string getValor(); ///< Retorna atributo "valor" da instancia
    void setValor(string); ///< Valida e posteriormente efetiva valor da string passada, caso seja válida, e retorna erro caso contrário

};


/**
 * @brief Classe representante do Dominio Faixa.
 *
 * Pode armazenar uma string no formato de Faixa, fazendo validações necessárias e devolvendo erros caso não se consiga perpetuar o valor na classe.
 *
 * L, 10, 12, 14, 16 ou 18
 * Para armazenar algum valor, deve-se usar a função setValor(), passando como paramêtro a string que esteja sendo requerida.
 * Para utilizar-se de um valor salvo, deve-se usar a função getValor().
 */
class Faixa : public Abstracts::Dominio {

private:
    string faixa;
    void validarValor(string);  ///< Verifica se a string passada é válida, devolvendo erros caso não seja
public:
    static const string classname;
    string getValor(); ///< Retorna atributo "valor" da instancia
    void setValor(string); ///< Valida e posteriormente efetiva valor da string passada, caso seja válida, e retorna erro caso contrário

};




#endif
