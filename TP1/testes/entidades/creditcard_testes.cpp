#include "TU_ENT.hpp"

void TUCreditCard::setDataValida(DataValidade &valid){
    try{
        this->testando.setDataValidade(valid);
        this->estado.adicionaSucesso();
    }
    catch(std::invalid_argument){
        this->estado.adicionaErro("TUCreditCard: setDataValida retornou erro.");
    }

    if(this->testando.getDataValidade().getValor() != valid.getValor()){
        this->estado.adicionaErro("TUCreditCard: setDataValida não efetivou valor");
    }
    else{
        this->estado.adicionaSucesso();
    }
}

void TUCreditCard::setCodigoValido(CodigoSeguranca &valid){
    try{
        this->testando.setCodigoSeguranca(valid);
        this->estado.adicionaSucesso();
    }
    catch(std::invalid_argument){
        this->estado.adicionaErro("TUCreditCard: setCodigoValido retornou erro.");
    }

    if(this->testando.getCodigoSeguranca().getValor() != valid.getValor()){
        this->estado.adicionaErro("TUCreditCard: setCodigoValido não efetivou valor");
    }
    else{
        this->estado.adicionaSucesso();
    }
}

void TUCreditCard::setNumeroCartao(NumeroCartao &valid){
    try{
        this->testando.setNumeroCartao(valid);
        this->estado.adicionaSucesso();
    }
    catch(std::invalid_argument){
        this->estado.adicionaErro("TUCreditCard: setNumeroCartao retornou erro.");
    }

    if(this->testando.getNumeroCartao().getValor() != valid.getValor()){
        this->estado.adicionaErro("TUCreditCard: setNumeroCartao não efetivou valor");
    }
    else{
        this->estado.adicionaSucesso();
    }
}

void TUCreditCard::runTestes(){
    DataValidade data;
    CodigoSeguranca codigo;
    NumeroCartao numero;
    data.setValor("11/33");
    codigo.setValor("031");
    numero.setValor("4863231001094886");

    this->setCodigoValido(codigo);
    this->setDataValida(data);
    this->setNumeroCartao(numero);

    std::cout << "Foram feitos " << this->estado.totalTestes() << " testes para CreditCard.";
    this->estado.logAllErros();
}