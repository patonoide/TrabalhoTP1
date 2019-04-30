#ifndef ENTIDADES_CARD_H
#define ENTIDADES_CARD_H

#include "../dominios/creditcard_DOM.hpp"
#include "model.hpp"

/**
 * @brief Classe Representante da entidade Cartão de Credito
 * 
 *  Possui atributos:
 *  DataValidade, CodigoSeguranca, NumeroCartao
 * 
 *  O salvamento dos atributos e retornos de seus valores são feitos através de set
 */
class Card : public Model{
    private:
    DataValidade validade;
    CodigoSeguranca codigo;
    NumeroCartao numero;
    public:

    /// Recebe uma instancia de DataValidade e salva no seu respectivo atibuto da classe
    inline void setDataValidade(DataValidade &toSet);
    /// Retorna atributo DataValidade
    inline DataValidade getDataValidade();

    /// Recebe uma instancia de CodigoSeguranca e salva no seu respectivo atibuto da classe
    inline void setCodigoSeguranca(CodigoSeguranca &toSet);
    /// Retorna atributo CodigoSeguranca
    inline CodigoSeguranca getCodigoSeguranca();

    /// Recebe uma instancia de NumeroCartao e salva no seu respectivo atibuto da classe
    inline void setNumeroCartao(NumeroCartao &toSet);
    /// Retorna atributo NumeroCartao
    inline NumeroCartao getNumeroCartao();

};

void Card::setDataValidade(DataValidade &toSet){
    this->validade = toSet;
}
DataValidade Card::getDataValidade(){
    return this->validade;
}

void Card::setCodigoSeguranca(CodigoSeguranca &toSet){
    this->codigo = toSet;
}
CodigoSeguranca Card::getCodigoSeguranca(){
    return this->codigo;
}

void Card::setNumeroCartao(NumeroCartao &toSet){
    this->numero = toSet;
}
NumeroCartao Card::getNumeroCartao(){
    return this->numero;
}

#endif