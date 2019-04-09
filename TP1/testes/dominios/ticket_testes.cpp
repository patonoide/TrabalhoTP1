#include "TU_DOM.hpp"

/************** Codigo ingresso ***************/
void TUCodigoIngresso::runTestes(){
    /***** Chamando funções de testes *****/
    this->SetValorValido<CodigoIngresso>("01234");              // Valor Valido
    this->SetValorInvalido<CodigoIngresso>("qualquercoisa");    // Valor invalido: absurdo
    this->SetValorInvalido<CodigoIngresso>("0x234");            // Valor invalido: caracter
    this->SetValorInvalido<CodigoIngresso>("012345");           // Valor invalido: tamanho maior 
    this->SetValorInvalido<CodigoIngresso>("0123");             // Valor invalido: tamanho menor
    this->SetValorInvalido<CodigoIngresso>("     ");            // Valor invalido: espaços em branco
    this->SetValorInvalido<CodigoIngresso>("01234  ");          // Valor invalido: espaços em branco

    // Mostrando resultado no terminal
    std::cout << "Foram feitos " << this->estado.totalTestes() << " testes para CodigoIngresso";
    this->estado.logAllErros();
}