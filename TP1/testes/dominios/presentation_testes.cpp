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
void TUHorario::runTestes(){
    /***** Chamando funções de testes *****/
    this->SetValorValido<Horario>("07:00");
    this->SetValorValido<Horario>("22:30");
    this->SetValorInvalido<Horario>("qualquercoisa");
    this->SetValorInvalido<Horario>("07:10");
    this->SetValorInvalido<Horario>("08:46");
    this->SetValorInvalido<Horario>("99:99");
    this->SetValorInvalido<Horario>("23:00");
    this->SetValorInvalido<Horario>("06:00");
    this->SetValorInvalido<Horario>("aa:bb");

// Mostrando resultado no terminal
    std::cout << "Foram feitos " << this->estado.totalTestes() << " testes para Horario";
    this->estado.logAllErros();
}
/******* Testes de Preco ********/

void TUPreco::runTestes(){
    /***** Chamando funções de testes *****/
    this->SetValorValido<Preco>("1000,00");
    this->SetValorValido<Preco>("3139,29");
    this->SetValorInvalido<Preco>("qualquercoisa");
    this->SetValorInvalido<Preco>("aa,bb");
    this->SetValorInvalido<Preco>("13a45,98");
    this->SetValorInvalido<Preco>("13445,a9");

// Mostrando resultado no terminal
    std::cout << "Foram feitos " << this->estado.totalTestes() << " testes para Preco";
    this->estado.logAllErros();
}


/******* Testes de Numero de Sala ********/

void TUNumeroSala::runTestes(){
    /***** Chamando funções de testes *****/
    this->SetValorValido<NumeroSala>("1");
    this->SetValorValido<NumeroSala>("10");
    this->SetValorInvalido<NumeroSala>("0");
    this->SetValorInvalido<NumeroSala>("11");
    this->SetValorInvalido<NumeroSala>("-1");
    this->SetValorInvalido<NumeroSala>("a");

// Mostrando resultado no terminal
    std::cout << "Foram feitos " << this->estado.totalTestes() << " testes para NumeroSala";
    this->estado.logAllErros();
}


/******* Testes de Disponibilidade ********/

void TUDisponibilidade::runTestes(){
    /***** Chamando funções de testes *****/
    this->SetValorValido<Disponibilidade>("0");
    this->SetValorValido<Disponibilidade>("250");
    this->SetValorInvalido<Disponibilidade>("-1");
    this->SetValorInvalido<Disponibilidade>("251");
    this->SetValorInvalido<Disponibilidade>("abc");
    this->SetValorInvalido<Disponibilidade>("045");

// Mostrando resultado no terminal
    std::cout << "Foram feitos " << this->estado.totalTestes() << " testes para Disponibilidade";
    this->estado.logAllErros();
}

/****** Rodando todos os testes dessa entidade ********/