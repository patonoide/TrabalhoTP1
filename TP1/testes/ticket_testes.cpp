#include "testes.hpp"

/******* Testes de Codigo de Ingresso ********/
void CodigoIngresso_SetValorErrado(Testes* t){ // throw(invalid_argument);
    CodigoIngresso Testando;
    string codInvalido = "codigo invalido";

    // Testando se o metodo retorna erro corretamente
    try{
        Testando.setCodigo(codInvalido);
        t->adicionaErro("Codigo invalido não retornou erro em: CodigoIngresso_SetValorErrado");
    }
    catch(std::invalid_argument){
        t->adicionaSucesso();
    }

    string retorno = Testando.getCodigo();
    // Testando se metodo fez o set invalido
    if(retorno == codInvalido){
        t->adicionaErro("Codigo inválido foi setado em: CodigoIngresso_SetValorErrado");
    }
    else t->adicionaSucesso();
}

void CodigoIngresso_SetValorCerto(Testes* t){
    CodigoIngresso Testando;
    string codValido = "01234";
    // Testando se o metodo não retorna erro com codigo valido
    try{
        Testando.setCodigo(codValido);
        t->adicionaSucesso();
    }
    catch(std::invalid_argument){
        t->adicionaErro("Código válido retornou erro: CodigoIngresso_SetValorCerto");
    }

    string retorno = Testando.getCodigo();
    // Testando se metodo fez o set
    if(retorno != codValido){
        t->adicionaErro("Código válido não está sendo efetivado em: CodigoIngresso_SetValorCerto");
    }
    else t->adicionaSucesso();
    
}

void CodigoIngresso_SetValorComCaracteres(Testes* t){
    
    CodigoIngresso Testando;
    string codInvalido = "01X34";
    // Testando se o metodo não deixa entrar letras
    try{
        Testando.setCodigo(codInvalido);
        t->adicionaErro("Código inválido não retornou erro: CodigoIngresso_SetValorComCaracteres");
    }
    catch(std::invalid_argument){
        t->adicionaSucesso();
    }

    string retorno = Testando.getCodigo();
    // Testando se metodo fez o set
    if(retorno == codInvalido){
        t->adicionaErro("Código inválido está sendo efetivado em: CodigoIngresso_SetValorComCaracteres");
    }
    else t->adicionaSucesso();
}


void CodigoIngresso_SetValorComTamanhoErrado(Testes* t){
    
    CodigoIngresso Testando;
    string codInvalido = "012345";
    // Testando se o metodo não deixa entrar letras
    try{
        Testando.setCodigo(codInvalido);
        t->adicionaErro("Código inválido não retornou erro: CodigoIngresso_SetValorComTamanhoErrado");
    }
    catch(std::invalid_argument){
        t->adicionaSucesso();
    }

    string retorno = Testando.getCodigo();
    // Testando se metodo fez o set
    if(retorno == codInvalido){
        t->adicionaErro("Código inválido está sendo efetivado em: CodigoIngresso_SetValorComTamanhoErrado");
    }
    else t->adicionaSucesso();
}

/****** Rodando todos os testes dessa entidade ********/
void ExecTest::Testes_Ticket(){
    // Criando instancia que irá armazenar os erros
    Testes ticket_tests;

    // Começando os testes
    std::cout << "\n==> Inicio dos testes de Ingresso\n";

    /***** Chamando funções de testes *****/
    CodigoIngresso_SetValorErrado(&ticket_tests);
    CodigoIngresso_SetValorCerto(&ticket_tests);
    CodigoIngresso_SetValorComCaracteres(&ticket_tests);
    CodigoIngresso_SetValorComTamanhoErrado(&ticket_tests);

    // Mostrando resultado no terminal
    ticket_tests.logAllErros();
    std::cout << "Foram feitos " << ticket_tests.totalTestes() << " testes.";
    std::cout << "\n==>Fim dos testes de Ingresso\n";
}