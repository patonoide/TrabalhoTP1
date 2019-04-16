#include "TU_DOM.hpp"

/****** Testes de Senha etária ********/
void TUSenha::runTestes(){
    /***** Chamando funções de testes *****/
    this->SetValorValido<Senha>("AbcDe1");             // Testando um valor valido

    this->SetValorInvalido<Senha>("20aaaa");
    this->SetValorInvalido<Senha>("20BceB");
    this->SetValorInvalido<Senha>("ABCDEF");
    this->SetValorInvalido<Senha>("123456");
    this->SetValorInvalido<Senha>("abcdef");
    this->SetValorInvalido<Senha>("20");
    this->SetValorInvalido<Senha>("20666666");
    this->SetValorInvalido<Senha>("qualquercoisa"); // Valor invalido: absurdo

    // Mostrando resultado no terminal
    std::cout << "Foram feitos " << this->estado.totalTestes() << " testes para Senha.";
    this->estado.logAllErros();
}
