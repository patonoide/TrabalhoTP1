#include "TU_DOM.hpp"

/******* Testes de Codigo de Ingresso ********/
void TUCodigoIngresso::SetValorInvalido(string codInvalido){ // throw(invalid_argument);
    CodigoIngresso Testando;

    // Testando se o metodo retorna erro corretamente
    try{
        Testando.setCodigo(codInvalido);
        this->estado.adicionaErro("CodigoIngresso_SetValorInvalido: Codigo supostamente invalido \""+codInvalido+"\" não retornou erro");
    }
    catch(std::invalid_argument){
        this->estado.adicionaSucesso();
    }
    // Testando se o codigo não foi setado como esperado
    this->estado.stringIsNotEq(Testando.getCodigo(), codInvalido, "CodigoIngresso_SetValorInvalido: Codigo supostamente inválido \""+codInvalido+"\" foi setado");
}

void TUCodigoIngresso::SetValorValido(string codValido){
    CodigoIngresso Testando;
    // Testando se o metodo não retorna erro com codigo valido
    try{
        Testando.setCodigo(codValido);
        this->estado.adicionaSucesso();
    }
    catch(std::invalid_argument){
        this->estado.adicionaErro("CodigoIngresso_SetValorValido: Código supostamente válido \""+codValido+"\" retornou erro");
    }

    // Testando se o codigo foi setado como esperado
    this->estado.stringIsEq(Testando.getCodigo(), codValido, "CodigoIngresso_SetValorValido: Código supostamente válido  \""+codValido+"\" não está sendo efetivado");
}

void TUCodigoIngresso::runTestes(){
    /***** Chamando funções de testes *****/
    TUCodigoIngresso::SetValorValido("01234");              // Valor Valido
    TUCodigoIngresso::SetValorInvalido("qualquercoisa");    // Valor invalido: absurdo
    TUCodigoIngresso::SetValorInvalido("0x234");            // Valor invalido: caracter
    TUCodigoIngresso::SetValorInvalido("012345");           // Valor invalido: tamanho maior 
    TUCodigoIngresso::SetValorInvalido("0123");             // Valor invalido: tamanho menor
    TUCodigoIngresso::SetValorInvalido("     ");            // Valor invalido: espaços em branco
    TUCodigoIngresso::SetValorInvalido("01234  ");          // Valor invalido: espaços em branco

    // Mostrando resultado no terminal
    std::cout << "Foram feitos " << this->estado.totalTestes() << " testes para CodigoIngresso";
    this->estado.logAllErros();
}