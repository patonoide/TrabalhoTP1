#include "TU_DOM.hpp"

/************** Codigo apresentação ***************/
void TUCodigoApresentacao::runTestes(){
    /***** Chamando funções de testes *****/
    this->SetValorValido<CodigoApresentacao>("0123");
    this->SetValorValido<CodigoApresentacao>("9999");
    this->SetValorInvalido<CodigoApresentacao>("qualquercoisa");
    this->SetValorInvalido<CodigoApresentacao>("012");
    this->SetValorInvalido<CodigoApresentacao>("01234");
    this->SetValorInvalido<CodigoApresentacao>("01x3");
    this->SetValorInvalido<CodigoApresentacao>("xxxx");
    this->SetValorInvalido<CodigoApresentacao>("-01234");

    // Mostrando resultado no terminal
    std::cout << "Foram feitos " << this->estado.totalTestes() << " testes para CodigoApresentacao";
    this->estado.logAllErros();
}

/******* Testes de Data ********/

/******* Testes de Horário ********/

/******* Testes de Preco ********/

/******* Testes de Numero de Sala ********/

/******* Testes de Disponibilidade ********/

/****** Rodando todos os testes dessa entidade ********/