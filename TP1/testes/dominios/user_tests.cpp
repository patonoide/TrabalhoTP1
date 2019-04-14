#include "TU_DOM.hpp"

/****** Testes de Senha etária ********/
void TUSenha::runTestes(){
    /***** Chamando funções de testes *****/
    this->SetValorValido<Senha>("L");             // Testando um valor valido
    this->SetValorValido<Senha>("10");
    this->SetValorValido<Senha>("12");
    this->SetValorValido<Senha>("14");
    this->SetValorValido<Senha>("16");
    this->SetValorValido<Senha>("18");
    this->SetValorInvalido<Senha>("20");
    this->SetValorInvalido<Senha>("qualquercoisa"); // Valor invalido: absurdo

    // Mostrando resultado no terminal
    std::cout << "Foram feitos " << this->estado.totalTestes() << " testes para Senha.";
    this->estado.logAllErros();
}
