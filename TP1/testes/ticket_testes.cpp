#include "testes.hpp"


void CodigoIngresso_SetValorErrado(Testes::Erros* erros){ // throw(invalid_argument);
    CodigoIngresso Testando;
    string codInvalido = "codigo invalido";

    // Testando se o metodo retorna erro corretamente
    try{
        Testando.setCodigo(codInvalido);
        erros->adicionaErro("Codigo invalido não retornou erro em: CodigoIngresso_SetValorErrado");
    }
    catch(std::invalid_argument){}

    string retorno = Testando.getCodigo();
    // Testando se metodo fez o set invalido
    if(retorno == codInvalido){
        erros->adicionaErro("Codigo inválido foi setado em: CodigoIngresso_SetValorErrado");
    }
}

void CodigoIngresso_SetValorCerto(Testes::Erros* erros){
    CodigoIngresso Testando;
    string codValido = "01234";
    // Testando se o metodo não retorna erro com codigo valido
    try{
        Testando.setCodigo(codValido);
    }
    catch(std::invalid_argument){
        erros->adicionaErro("Código válido retornou erro: CodigoIngresso_SetValorCerto");
    }

    string retorno = Testando.getCodigo();
    // Testando se metodo fez o set
    if(retorno != codValido){
        erros->adicionaErro("Código válido não está sendo efetivado em: CodigoIngresso_SetValorCerto");
    }
}

void CodigoIngresso_SetValorComCaracteres(Testes::Erros* erros){
    
    CodigoIngresso Testando;
    string codInvalido = "01X34";
    // Testando se o metodo não deixa entrar letras
    try{
        Testando.setCodigo(codInvalido);
        erros->adicionaErro("Código inválido não retornou erro: CodigoIngresso_SetValorComCaracteres");
    }
    catch(std::invalid_argument){}

    string retorno = Testando.getCodigo();
    // Testando se metodo fez o set
    if(retorno == codInvalido){
        erros->adicionaErro("Código inválido está sendo efetivado em: CodigoIngresso_SetValorComCaracteres");
    }
}


void CodigoIngresso_SetValorComTamanhoErrado(Testes::Erros* erros){
    
    CodigoIngresso Testando;
    string codInvalido = "012345";
    // Testando se o metodo não deixa entrar letras
    try{
        Testando.setCodigo(codInvalido);
        erros->adicionaErro("Código inválido não retornou erro: CodigoIngresso_SetValorComTamanhoErrado");
    }
    catch(std::invalid_argument){}

    string retorno = Testando.getCodigo();
    // Testando se metodo fez o set
    if(retorno == codInvalido){
        erros->adicionaErro("Código inválido está sendo efetivado em: CodigoIngresso_SetValorComTamanhoErrado");
    }
}


void Testes::RodarTestes_Ticket(){
    // Criando instancia que irá armazenar os erros
    Testes::Erros erros;

    // Começando os testes
    std::cout << "\n==> Inicio dos testes de Ingresso\n";

    /***** Chamando funções de testes *****/
    CodigoIngresso_SetValorErrado(&erros);
    CodigoIngresso_SetValorCerto(&erros);
    CodigoIngresso_SetValorComCaracteres(&erros);
    CodigoIngresso_SetValorComTamanhoErrado(&erros);

    // Mostrando resultado no terminal
    erros.logAllErros();

    std::cout << "\n==>Fim dos testes de Ingresso\n";
}