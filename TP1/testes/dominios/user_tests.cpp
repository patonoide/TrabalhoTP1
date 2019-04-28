#include "TU_DOM.hpp"

/****** Testes de Senha  ********/
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


/****** Testes de Cpf ********/
void TUCpf::runTestes(){
    /***** Chamando funções de testes *****/
    this->SetValorValido<Cpf>("018.065.571-00");             // Testando um valor valido
    this->SetValorInvalido<Cpf>("000.000.000-00");
    this->SetValorInvalido<Cpf>("dasfasdsa");
    this->SetValorInvalido<Cpf>("999.999.999-99");

    this->SetValorInvalido<Cpf>("090.699.989-09");
    // Mostrando resultado no terminal
    std::cout << "Foram feitos " << this->estado.totalTestes() << " testes para CPF.";
    this->estado.logAllErros();
}
