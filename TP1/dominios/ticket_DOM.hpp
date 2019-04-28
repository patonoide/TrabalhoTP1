#ifndef DOM_TICKET_H
#define DOM_TICKET_H

#include "abstract_DOM.hpp"

/**
 * @brief Classe representante do Dominio código de ingresso
 * 
 * Pode armazenar uma string no formato de código de ingresso, fazendo validações necessárias e devolvendo erros caso não se consiga perpetuar o valor na classe.. 
 * 
 * Códigos de Apresentação devem ser composto de números entre 0 e 9, e tem um tamanho específico de 5 digitos.
 * Para armazenar algum valor, deve-se usar a função setValor(), passando como paramêtro a string que esteja sendo requerida.
 * Para utilizar-se de um valor salvo, deve-se usar a função getValor().
 */
class CodigoIngresso : public Abstracts::Codigo{
  public:
    static const string classname;
    /**
     * @brief Constrói uma nova instacia do Codigo Seguranca, 
     * com o tamanho do codigo sendo como 5. 
     * 
     */
    CodigoIngresso(){
      TAMANHO = 5;
    }
};

#endif