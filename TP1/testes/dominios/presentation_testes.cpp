#include "TU_DOM.hpp"

/******* Testes de Codigo de Apresentação ********/
void TUCodigoApresentacao::SetValorInvalido(string codInvalido){ // throw(invalid_argument);
    CodigoApresentacao Testando;

    // Testando se o metodo retorna erro corretamente
    try{
        Testando.setCodigo(codInvalido);
        this->estado.adicionaErro("TUCodigoApresentacao::SetValorInvalido: Codigo supostamente invalido \""+codInvalido+"\" não retornou erro");
    }
    catch(std::invalid_argument){
        this->estado.adicionaSucesso();
    }
    // Testando se o codigo não foi setado como esperado
    this->estado.stringIsNotEq(Testando.getCodigo(), codInvalido, "TUCodigoApresentacao::SetValorInvalido: Codigo supostamente inválido \""+codInvalido+"\" foi setado");
}

void TUCodigoApresentacao::SetValorValido(string codValido){
    CodigoApresentacao Testando;
    // Testando se o metodo não retorna erro com codigo valido
    try{
        Testando.setCodigo(codValido);
        this->estado.adicionaSucesso();
    }
    catch(std::invalid_argument){
        this->estado.adicionaErro("TUCodigoApresentacao::SetValorValido: Código supostamente válido \""+codValido+"\" retornou erro");
    }

    // Testando se o codigo foi setado como esperado
    this->estado.stringIsEq(Testando.getCodigo(), codValido, "TUCodigoApresentacao::SetValorValido: Código supostamente válido  \""+codValido+"\" não está sendo efetivado");
}

void TUCodigoApresentacao::runTestes(){
    /***** Chamando funções de testes *****/
    TUCodigoApresentacao::SetValorValido("0123");
    TUCodigoApresentacao::SetValorValido("9999");
    TUCodigoApresentacao::SetValorInvalido("qualquercoisa");
    TUCodigoApresentacao::SetValorInvalido("012");
    TUCodigoApresentacao::SetValorInvalido("01234");
    TUCodigoApresentacao::SetValorInvalido("01x3");
    TUCodigoApresentacao::SetValorInvalido("xxxx");
    TUCodigoApresentacao::SetValorInvalido("-01234");

    // Mostrando resultado no terminal
    std::cout << "Foram feitos " << this->estado.totalTestes() << " testes para CodigoApresentacao";
    this->estado.logAllErros();
}

/******* Testes de Data ********/

/******* Testes de Horário ********/

/******* Testes de Preco ********/

/******* Testes de Numero de Sala ********/

/******* Testes de Disponibilidade ********/

/****** Rodando todos os testes dessa entidade ********/