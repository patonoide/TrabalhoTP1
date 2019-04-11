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
