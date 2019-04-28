#include "TU_ENT.hpp"

void TUTicket::setCodigoValido(CodigoIngresso &valid){
    try{
        this->testando.setCodigoIngresso(valid);
        this->estado.adicionaSucesso();
    }
    catch(std::invalid_argument){
        this->estado.adicionaErro("TUTicket: setCodigoValido retornou erro.");
    }

    if(this->testando.getCodigoIngresso().getValor() != valid.getValor()){
        this->estado.adicionaErro("TUTicket: setCodigoValido não efetivou valor");
    }
    else{
        this->estado.adicionaSucesso();
    }
}

void TUTicket::runTestes(){
    CodigoIngresso primeiro;
    primeiro.setValor("03931");

    this->setCodigoValido(primeiro);

    std::cout << "Foram feitos " << this->estado.totalTestes() << " testes para Ticket";
    this->estado.logAllErros();
}