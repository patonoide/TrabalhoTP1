#include "TU_DOM.hpp"

/****** Testes de Faixa etária ********/
void TUFaixa::runTestes(){
    /***** Chamando funções de testes *****/
    this->SetValorValido<Faixa>("L");             // Testando um valor valido
    this->SetValorInvalido<Faixa>("qualquercoisa"); // Valor invalido: absurdo

    // Mostrando resultado no terminal
    std::cout << "Foram feitos " << this->estado.totalTestes() << " testes para Faixa.";
    this->estado.logAllErros();
}
