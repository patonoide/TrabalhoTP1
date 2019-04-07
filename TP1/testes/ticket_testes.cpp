#include "testes.hpp"

/******* Testes de Codigo de Ingresso ********/
void CodigoIngresso_SetValorInvalido(Testes* t, string codInvalido){ // throw(invalid_argument);
    CodigoIngresso Testando;

    // Testando se o metodo retorna erro corretamente
    try{
        Testando.setCodigo(codInvalido);
        t->adicionaErro("CodigoIngresso_SetValorInvalido: Codigo supostamente invalido \""+codInvalido+"\" não retornou erro");
    }
    catch(std::invalid_argument){
        t->adicionaSucesso();
    }
    // Testando se o codigo não foi setado como esperado
    t->stringIsNotEq(Testando.getCodigo(), codInvalido, "CodigoIngresso_SetValorInvalido: Codigo supostamente inválido \""+codInvalido+"\" foi setado");
}

void CodigoIngresso_SetValorValido(Testes* t, string codValido){
    CodigoIngresso Testando;
    // Testando se o metodo não retorna erro com codigo valido
    try{
        Testando.setCodigo(codValido);
        t->adicionaSucesso();
    }
    catch(std::invalid_argument){
        t->adicionaErro("CodigoIngresso_SetValorValido: Código supostamente válido \""+codValido+"\" retornou erro");
    }

    // Testando se o codigo foi setado como esperado
    t->stringIsEq(Testando.getCodigo(), codValido, "CodigoIngresso_SetValorValido: Código supostamente válido  \""+codValido+"\" não está sendo efetivado");
}


/****** Rodando todos os testes dessa entidade ********/
void ExecTest::Testes_Ticket(){
    // Criando instancia que irá armazenar os erros
    Testes ticket_tests;

    // Começando os testes
    std::cout << "\n==> Inicio dos testes de Ingresso\n";

    /***** Chamando funções de testes *****/
    CodigoIngresso_SetValorValido(&ticket_tests, "01234");
    CodigoIngresso_SetValorInvalido(&ticket_tests, "qualquercoisa");//totalmente errado
    CodigoIngresso_SetValorInvalido(&ticket_tests, "0x234");//com caracter
    CodigoIngresso_SetValorInvalido(&ticket_tests, "012345");//tamanho maior
    CodigoIngresso_SetValorInvalido(&ticket_tests, "0123");//tamanho menor
    CodigoIngresso_SetValorInvalido(&ticket_tests, "     ");//tamanho certo mas só contem espaços

    // Mostrando resultado no terminal
    ticket_tests.logAllErros();
    std::cout << "Foram feitos " << ticket_tests.totalTestes() << " testes.";
    std::cout << "\n==>Fim dos testes de Ingresso\n";
}