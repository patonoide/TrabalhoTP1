#include "testes.hpp"

/******* Testes de Codigo de Apresentação ********/
void CodigoApresentacao_SetValorInvalido(Testes* t, string codInvalido){ // throw(invalid_argument);
    CodigoApresentacao Testando;

    // Testando se o metodo retorna erro corretamente
    try{
        Testando.setCodigo(codInvalido);
        t->adicionaErro("CodigoApresentacao_SetValorInvalido: Codigo supostamente invalido \""+codInvalido+"\" não retornou erro");
    }
    catch(std::invalid_argument){
        t->adicionaSucesso();
    }
    // Testando se o codigo não foi setado como esperado
    t->stringIsNotEq(Testando.getCodigo(), codInvalido, "CodigoApresentacao_SetValorInvalido: Codigo supostamente inválido \""+codInvalido+"\" foi setado");
}

void CodigoApresentacao_SetValorValido(Testes* t, string codValido){
    CodigoApresentacao Testando;
    // Testando se o metodo não retorna erro com codigo valido
    try{
        Testando.setCodigo(codValido);
        t->adicionaSucesso();
    }
    catch(std::invalid_argument){
        t->adicionaErro("CodigoApresentacao_SetValorValido: Código supostamente válido \""+codValido+"\" retornou erro");
    }

    // Testando se o codigo foi setado como esperado
    t->stringIsEq(Testando.getCodigo(), codValido, "CodigoApresentacao_SetValorValido: Código supostamente válido  \""+codValido+"\" não está sendo efetivado");
}

/******* Testes de Data ********/

/******* Testes de Horário ********/

/******* Testes de Preco ********/

/******* Testes de Numero de Sala ********/

/******* Testes de Disponibilidade ********/

/****** Rodando todos os testes dessa entidade ********/
void ExecTest::Testes_Presentation(){
    // Criando instancia que irá armazenar os erros
    Testes present_tests;

    // Começando os testes
    std::cout << "\n==> Inicio dos testes de Apresentação\n";

    /***** Chamando funções de testes *****/
    // Dominio Codigo de Apresentação
    CodigoApresentacao_SetValorValido(&present_tests, "0123");
    CodigoApresentacao_SetValorValido(&present_tests, "9999");
    CodigoApresentacao_SetValorInvalido(&present_tests, "qualquercoisa");
    CodigoApresentacao_SetValorInvalido(&present_tests, "012");
    CodigoApresentacao_SetValorInvalido(&present_tests, "01234");
    CodigoApresentacao_SetValorInvalido(&present_tests, "01x3");
    CodigoApresentacao_SetValorInvalido(&present_tests, "xxxx");
    CodigoApresentacao_SetValorInvalido(&present_tests, "-01234");

    // Dominio Data

    // Dominio Horario

    // Dominio Preco

    // Dominio Numero de Sala

    // Dominio Disponibilidade


    // Mostrando resultado no terminal
    present_tests.logAllErros();
    std::cout << "Foram feitos " << present_tests.totalTestes() << " testes.";
    std::cout << "\n==>Fim dos testes de Apresentação\n";
}