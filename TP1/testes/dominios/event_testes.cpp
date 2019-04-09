#include "TU_DOM.hpp"


/******* Testes de Faixa etária do Evento ********/
void TUFaixa::SetValorInvalido(string valorInvalido){ // throw(invalid_argument);
    Faixa Testando;

    // Testando se o metodo retorna erro corretamente
    try{
        Testando.setFaixa(valorInvalido);
        this->estado.adicionaErro("Faixa_SetValorInvalido: Faixa supostamente invalida \""+valorInvalido+"\" não retornou erro");
    }
    catch(std::invalid_argument){
        this->estado.adicionaSucesso();
    }
    // Testando se o codigo não foi setado como esperado
    this->estado.stringIsNotEq(Testando.getFaixa(), valorInvalido, "Faixa_SetValorInvalido: Faixa supostamente inválida \""+valorInvalido+"\" foi setado");
}

void TUFaixa::SetValorValido(string valorValido){
    Faixa Testando;
    // Testando se o metodo não retorna erro com codigo valido
    try{
        Testando.setFaixa(valorValido);
        this->estado.adicionaSucesso();
    }
    catch(std::invalid_argument){
        this->estado.adicionaErro("Faixa_SetValorValido: Faixa supostamente válida \""+valorValido+"\" retornou erro");
    }

    // Testando se o codigo foi setado como esperado
    this->estado.stringIsEq(Testando.getFaixa(), valorValido, "Faixa_SetValorValido: Faixa supostamente válido  \""+valorValido+"\" não está sendo efetivado");
}

void TUFaixa::runTestes(){
    /***** Chamando funções de testes *****/
    TUFaixa::SetValorValido("L");              // Valor Valido
    TUFaixa::SetValorInvalido("11");    // Valor invalido: absurdo


    // Mostrando resultado no terminal
    std::cout << "Foram feitos " << this->estado.totalTestes() << " testes para CodigoIngresso";
    this->estado.logAllErros();
}
