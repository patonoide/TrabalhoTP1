#include "testes.hpp"
#include<iostream>      // Notificações no console


void CodigoApresentacao_SetValorErrado(Testes::Erros* erros){ // throw(invalid_argument);
    CodigoApresentacao Testando;
    // Testando se o metodo retorna erro corretamente
    try{
        Testando.setCodigo("codigo invalido");
        std::cout << "x";
        erros->adicionaErro("Não retornando erro em: CodigoApresentacao_SetValorErrado");
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
    int errors=0;
    CodigoApresentacao Testando;
    
    // Testando se o metodo não retorna erro com codigo valido
    try{
        Testando.setCodigo("012345678");
        std::cout << ".";
    }
    catch(std::invalid_argument){
        std::cout << "x";
        erros->adicionaErro("Código válido retornou erro: CodigoApresentacao_SetValorCerto");
        errors+=1;
    }

    string retorno = Testando.getCodigo();
    // Testando se metodo fez o set
    if(retorno == "012345678"){
        std::cout << ".";
    }
    else{
        std::cout << "x";
        erros->adicionaErro("Código válido não está sendo efetivado em: CodigoApresentacao_SetValorCerto");
        errors+=1;
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

    // Mostrando resultado no terminal
    erros.logAllErros();

    std::cout << "\n==>Fim dos testes de Ingresso\n";
}