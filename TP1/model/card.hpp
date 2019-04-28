#ifndef ENTIDADES_CARD_H
#define ENTIDADES_CARD_H

#include "../dominios/creditcard_DOM.hpp"
#include "model.hpp"

class Card : public Model{
    private:
    DataValidade validade;
    CodigoSeguranca codigo;
    NumeroCartao numero;
    public:
    inline void setDataValidade(DataValidade &toSet);
    inline DataValidade getDataValidade();

    inline void setCodigoSeguranca(CodigoSeguranca &toSet);
    inline CodigoSeguranca getCodigoSeguranca();

    inline void setNumeroCartao(NumeroCartao &toSet);
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