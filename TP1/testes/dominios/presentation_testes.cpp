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
void TUData::runTestes(){
    /***** Chamando funções de testes *****/
    this->SetValorValido<Data>("21/12/99");
    this->SetValorValido<Data>("10/10/10");
    this->SetValorInvalido<Data>("qualquercoisa");
    this->SetValorInvalido<Data>("99/99/99");
    this->SetValorInvalido<Data>("99/11/11");
    this->SetValorInvalido<Data>("11/99/11");
    this->SetValorInvalido<Data>("111/11/11");
    this->SetValorInvalido<Data>("11/111/11");
    this->SetValorInvalido<Data>("11/11/111");

// Mostrando resultado no terminal
    std::cout << "Foram feitos " << this->estado.totalTestes() << " testes para Data";
    this->estado.logAllErros();
}

/******* Testes de Horário ********/

/******* Testes de Preco ********/

/******* Testes de Numero de Sala ********/

/******* Testes de Disponibilidade ********/

/****** Rodando todos os testes dessa entidade ********/