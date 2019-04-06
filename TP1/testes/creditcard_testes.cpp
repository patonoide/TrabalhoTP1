#include "testes.hpp"


void CodigoSeguranca_SetValorErrado(Testes::Erros* erros){ // throw(invalid_argument);
    CodigoSeguranca Testando;
    // Testando se o metodo retorna erro corretamente
    try{
        Testando.setCodigo("codigo invalido");
        std::cout << "x";
        erros->adicionaErro("Codigo invalido não retornou erro em: CodigoSeguranca_SetValorErrado");
    }
    catch(std::invalid_argument){
        std::cout << ".";
    }

    string retorno = Testando.getCodigo();
    // Testando se metodo fez o set invalido
    if(retorno == "codigo invalido"){
        std::cout << "x";
        erros->adicionaErro("Codigo inválido foi setado em: CodigoSeguranca_SetValorErrado");
    }
    else{
        std::cout << ".";
    }

}

void CodigoSeguranca_SetValorCerto(Testes::Erros* erros){
    CodigoSeguranca Testando;
    
    // Testando se o metodo não retorna erro com codigo valido
    try{
        Testando.setCodigo("012");
        std::cout << ".";
    }
    catch(std::invalid_argument){
        std::cout << "x";
        erros->adicionaErro("Código válido retornou erro: CodigoSeguranca_SetValorCerto");
    }

    string retorno = Testando.getCodigo();
    // Testando se metodo fez o set
    if(retorno == "012"){
        std::cout << ".";
    }
    else{
        std::cout << "x";
        erros->adicionaErro("Código válido não está sendo efetivado em: CodigoSeguranca_SetValorCerto");
    }
}

void CodigoSeguranca_SetValorComCaracteres(Testes::Erros* erros){
    
    CodigoSeguranca Testando;
    
    // Testando se o metodo não deixa entrar letras
    try{
        Testando.setCodigo("01X");
        std::cout << "x";
        erros->adicionaErro("Código inválido não retornou erro: CodigoSeguranca_SetValorComCaracteres");
    }
    catch(std::invalid_argument){
        std::cout << ".";
    }

    string retorno = Testando.getCodigo();
    // Testando se metodo fez o set
    if(retorno == "01X"){
        std::cout << "x";
        erros->adicionaErro("Código inválido está sendo efetivado em: CodigoSeguranca_SetValorComCaracteres");
    }
    else{
        std::cout << ".";
    }
}

void CodigoSeguranca_SetValorComTamanhoErrado(Testes::Erros* erros){
    
    CodigoSeguranca Testando;
    
    // Testando se o metodo não deixa entrar letras
    try{
        Testando.setCodigo("012345");
        std::cout << "x";
        erros->adicionaErro("Código inválido não retornou erro: CodigoSeguranca_SetValorComTamanhoErrado");
    }
    catch(std::invalid_argument){
        std::cout << ".";
    }

    string retorno = Testando.getCodigo();
    // Testando se metodo fez o set
    if(retorno == "012345"){
        std::cout << "x";
        erros->adicionaErro("Código inválido está sendo efetivado em: CodigoSeguranca_SetValorComTamanhoErrado");
    }
    else{
        std::cout << ".";
    }
}

void Testes::RodarTestes_CreditCard(){
    // Criando instancia que irá armazenar os erros
    Testes::Erros erros;

    // Começando os testes
    std::cout << "\n==> Inicio dos testes de Seguranca\n";

    /***** Chamando funções de testes *****/
    CodigoSeguranca_SetValorErrado(&erros);
    CodigoSeguranca_SetValorCerto(&erros);
    CodigoSeguranca_SetValorComCaracteres(&erros);
    CodigoSeguranca_SetValorComTamanhoErrado(&erros);

    // Mostrando resultado no terminal
    erros.logAllErros();

    std::cout << "\n==>Fim dos testes de Seguranca\n";


}