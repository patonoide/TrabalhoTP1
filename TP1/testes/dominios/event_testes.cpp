#include "TU_DOM.hpp"

/****** Testes de Faixa etária ********/
void TUFaixa::runTestes(){
    /***** Chamando funções de testes *****/
    this->SetValorValido<Faixa>("L");             // Testando um valor valido
    this->SetValorValido<Faixa>("10");
    this->SetValorValido<Faixa>("12");
    this->SetValorValido<Faixa>("14");
    this->SetValorValido<Faixa>("16");
    this->SetValorValido<Faixa>("18");
    this->SetValorInvalido<Faixa>("20");
    this->SetValorInvalido<Faixa>("qualquercoisa"); // Valor invalido: absurdo

    // Mostrando resultado no terminal
    std::cout << "Foram feitos " << this->estado.totalTestes() << " testes para Faixa.";
    this->estado.logAllErros();
}

/****** Testes de Classe ********/
void TUClasse::runTestes(){
    /***** Chamando funções de testes *****/
    this->SetValorValido<Classe>("0");             // Testando um valor valido

    this->SetValorInvalido<Classe>("5"); // Valor invalido: absurdo

    // Mostrando resultado no terminal
    std::cout << "Foram feitos " << this->estado.totalTestes() << " testes para Classe";
    this->estado.logAllErros();
}

/****** Testes de Estado ********/
void TUEstado::runTestes(){
    /***** Chamando funções de testes *****/
    this->SetValorValido<Estado>("RS");             // Testando um valor valido

    this->SetValorInvalido<Estado>("5"); // Valor invalido: absurdo

    // Mostrando resultado no terminal
    std::cout << "Foram feitos " << this->estado.totalTestes() << " testes para Estado";
    this->estado.logAllErros();
}

/****** Testes de Cidade ********/
void TUCidade::runTestes(){
    /***** Chamando funções de testes *****/
    this->SetValorValido<Cidade>("RS");             // Testando um valor valido
    this->SetValorValido<Cidade>("sdada.dsad asda");
    this->SetValorInvalido<Cidade>("5"); // Valor invalido: absurdo
    this->SetValorInvalido<Cidade>("  ");
    this->SetValorInvalido<Cidade>("..");
    this->SetValorInvalido<Cidade>(". ");
    this->SetValorInvalido<Cidade>("dsakndhsakdkasndkandadknakdnasks");
    // Mostrando resultado no terminal
    std::cout << "Foram feitos " << this->estado.totalTestes() << " testes para Cidade";
    this->estado.logAllErros();
}


/****** Testes de Nome ********/
void TUName::runTestes(){
    /***** Chamando funções de testes *****/
    this->SetValorValido<Name>("RS");             // Testando um valor valido
    this->SetValorInvalido<Name>("  ");
    this->SetValorInvalido<Name>("5."); // Valor invalido: absurdo
    this->SetValorInvalido<Name>(" dsadsad43232fadsadasdvavgrbnbfvbghxgdethugybkf");
    // Mostrando resultado no terminal
    std::cout << "Foram feitos " << this->estado.totalTestes() << " testes para Name";
    this->estado.logAllErros();
}

/****** Testes de Codigo de Evento ********/
void TUCodigoEvento::runTestes(){
    /***** Chamando funções de testes *****/
    this->SetValorValido<CodigoEvento>("111");             // Testando um valor valido

    this->SetValorInvalido<CodigoEvento>(" dsadsad43232fadsadasdvavgrbnbfvbghxgdethugybkf");
    // Mostrando resultado no terminal
    std::cout << "Foram feitos " << this->estado.totalTestes() << " testes para Codigo Evento";
    this->estado.logAllErros();
}
