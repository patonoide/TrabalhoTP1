#include "testes.hpp"
#include<iostream>      // Notificações no console


void CodigoApresentacao_SetValorErrado(Testes::Erros* erros){ // throw(invalid_argument);
    CodigoApresentacao Testando;
    // Testando se o metodo retorna erro corretamente
    try{
        Testando.setCodigo("codigo invalido");
        std::cout << "x";
        erros->adicionaErro("Codigo invalido não retornou erro em: CodigoApresentacao_SetValorErrado");
    }
    catch(std::invalid_argument){
        std::cout << ".";
    }

    string retorno = Testando.getCodigo();
    // Testando se metodo fez o set invalido
    if(retorno == "codigo invalido"){
        std::cout << "x";
        erros->adicionaErro("Codigo inválido foi setado em: CodigoApresentacao_SetValorErrado");
    }
    else{
        std::cout << ".";
    }

}

void CodigoApresentacao_SetValorCerto(Testes::Erros* erros){
    CodigoApresentacao Testando;
    
    // Testando se o metodo não retorna erro com codigo valido
    try{
        Testando.setCodigo("01234");
        std::cout << ".";
    }
    catch(std::invalid_argument){
        std::cout << "x";
        erros->adicionaErro("Código válido retornou erro: CodigoApresentacao_SetValorCerto");
    }

    string retorno = Testando.getCodigo();
    // Testando se metodo fez o set
    if(retorno == "01234"){
        std::cout << ".";
    }
    else{
        std::cout << "x";
        erros->adicionaErro("Código válido não está sendo efetivado em: CodigoApresentacao_SetValorCerto");
    }
}

void CodigoApresentacao_SetValorComCaracteres(Testes::Erros* erros){
    
    CodigoApresentacao Testando;
    
    // Testando se o metodo não deixa entrar letras
    try{
        Testando.setCodigo("01X34");
        std::cout << "x";
        erros->adicionaErro("Código inválido não retornou erro: CodigoApresentacao_SetValorComCaracteres");
    }
    catch(std::invalid_argument){
        std::cout << ".";
    }

    string retorno = Testando.getCodigo();
    // Testando se metodo fez o set
    if(retorno == "01X34"){
        std::cout << "x";
        erros->adicionaErro("Código inválido está sendo efetivado em: CodigoApresentacao_SetValorComCaracteres");
    }
    else{
        std::cout << ".";
    }
}


void CodigoApresentacao_SetValorComTamanhoErrado(Testes::Erros* erros){
    
    CodigoApresentacao Testando;
    
    // Testando se o metodo não deixa entrar letras
    try{
        Testando.setCodigo("012345");
        std::cout << "x";
        erros->adicionaErro("Código inválido não retornou erro: CodigoApresentacao_SetValorComTamanhoErrado");
    }
    catch(std::invalid_argument){
        std::cout << "x";
    }

    string retorno = Testando.getCodigo();
    // Testando se metodo fez o set
    if(retorno == "012345"){
        std::cout << "x";
        erros->adicionaErro("Código inválido está sendo efetivado em: CodigoApresentacao_SetValorComTamanhoErrado");
    }
    else{
        std::cout << ".";
    }
}


void Testes::RodarTestes_Ticket(){
    // Criando instancia que irá armazenar os erros
    Testes::Erros erros;

    // Começando os testes
    std::cout << "\n==> Inicio dos testes de Ingresso\n";

    /***** Chamando funções de testes *****/
    CodigoApresentacao_SetValorErrado(&erros);
    CodigoApresentacao_SetValorCerto(&erros);
    CodigoApresentacao_SetValorComCaracteres(&erros);
    CodigoApresentacao_SetValorComTamanhoErrado(&erros);

    // Mostrando resultado no terminal
    erros.logAllErros();

    std::cout << "\n==>Fim dos testes de Ingresso\n";
}