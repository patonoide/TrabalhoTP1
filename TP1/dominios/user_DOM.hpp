#ifndef DOM_USER_H
#define DOM_USER_H

#include "abstract_DOM.hpp"
#include <iostream>

#include<string>   // Incluindo biblioteca para uso de string
#include <algorithm>
using std::string;


/**
 * @brief Classe representante do Dominio CPF.
 *
 * Pode armazenar uma string no formato de CPF, fazendo validações necessárias e devolvendo erros caso não se consiga perpetuar o valor na classe.
 *
 * Tem que ser um CPF válido.
 * Link de referência: https://dicasdeprogramacao.com.br/algoritmo-para-validar-cpf/
 * Para armazenar algum valor, deve-se usar a função setValor(), passando como paramêtro a string que esteja sendo requerida.
 * Para utilizar-se de um valor salvo, deve-se usar a função getValor().
 */
class Cpf : public Abstracts::Dominio {


private:
    string cpf;
    void validarValor(string); ///< Verifica se a string passada é válida, devolvendo erros caso não seja
public:
    static const string classname;
    string getValor(); ///< Retorna atributo "valor" da instancia
    void setValor(string); ///< Valida e posteriormente efetiva valor da string passada, caso seja válida, e retorna erro caso contrário


};


/**
 * @brief Classe representante do Dominio Senha.
 *
 * Pode armazenar uma string no formato de Senha, fazendo validações necessárias e devolvendo erros caso não se consiga perpetuar o valor na classe.
 *
 * Formato XXXXXX onde X pode ser letra (A – Z a – z) ou dígito (0 a 9). Não há caracters repetidos. Há pelo menos uma letra maiúscula, uma minúscula e um dígito.
 * Para armazenar algum valor, deve-se usar a função setValor(), passando como paramêtro a string que esteja sendo requerida.
 * Para utilizar-se de um valor salvo, deve-se usar a função getValor().
 *
 */
class Senha : public Abstracts::Dominio{

private:
    string senha;
    void validarValor(string);  ///< Verifica se a string passada é válida, devolvendo erros caso não seja
public:
    static const string classname;
    string getValor();  ///< Retorna atributo "valor" da instancia
    void setValor(string); ///< Valida e posteriormente efetiva valor da string passada, caso seja válida, e retorna erro caso contrário


};




#endif
