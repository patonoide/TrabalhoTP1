#include "TU_DOM.hpp"

/******* Testes de Codigo de Apresentação ********/
void TUCodigoApresentacao::SetValorInvalido(Testes* t, string codInvalido){ // throw(invalid_argument);
    CodigoApresentacao Testando;

    // Testando se o metodo retorna erro corretamente
    try{
        Testando.setCodigo(codInvalido);
        t->adicionaErro("TUCodigoApresentacao::SetValorInvalido: Codigo supostamente invalido \""+codInvalido+"\" não retornou erro");
    }
    catch(std::invalid_argument){
        t->adicionaSucesso();
    }
    // Testando se o codigo não foi setado como esperado
    t->stringIsNotEq(Testando.getCodigo(), codInvalido, "TUCodigoApresentacao::SetValorInvalido: Codigo supostamente inválido \""+codInvalido+"\" foi setado");
}

void TUCodigoApresentacao::SetValorValido(Testes* t, string codValido){
    CodigoApresentacao Testando;
    // Testando se o metodo não retorna erro com codigo valido
    try{
        Testando.setCodigo(codValido);
        t->adicionaSucesso();
    }
    catch(std::invalid_argument){
        t->adicionaErro("TUCodigoApresentacao::SetValorValido: Código supostamente válido \""+codValido+"\" retornou erro");
    }

    // Testando se o codigo foi setado como esperado
    t->stringIsEq(Testando.getCodigo(), codValido, "TUCodigoApresentacao::SetValorValido: Código supostamente válido  \""+codValido+"\" não está sendo efetivado");
}

void TUCodigoApresentacao::runTestes(){
    // Criando instancia que irá armazenar os erros
    Testes codigo_testes;

    // Começando os testes
    std::cout << "\n==> Inicio dos testes de CodigoApresentação\n";

    /***** Chamando funções de testes *****/
    TUCodigoApresentacao::SetValorValido(&codigo_testes, "0123");
    TUCodigoApresentacao::SetValorValido(&codigo_testes, "9999");
    TUCodigoApresentacao::SetValorInvalido(&codigo_testes, "qualquercoisa");
    TUCodigoApresentacao::SetValorInvalido(&codigo_testes, "012");
    TUCodigoApresentacao::SetValorInvalido(&codigo_testes, "01234");
    TUCodigoApresentacao::SetValorInvalido(&codigo_testes, "01x3");
    TUCodigoApresentacao::SetValorInvalido(&codigo_testes, "xxxx");
    TUCodigoApresentacao::SetValorInvalido(&codigo_testes, "-01234");

    // Mostrando resultado no terminal
    codigo_testes.logAllErros();
    std::cout << "Foram feitos " << codigo_testes.totalTestes() << " testes.";
    std::cout << "\n==>Fim dos testes de CodigoApresentação\n";
}

/******* Testes de Data ********/

/******* Testes de Horário ********/

/******* Testes de Preco ********/

/******* Testes de Numero de Sala ********/

/******* Testes de Disponibilidade ********/

/****** Rodando todos os testes dessa entidade ********/