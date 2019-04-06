#include "testes.hpp"

/****** Testes de Codigo de Segurança ********/
void CodigoSeguranca_SetValorErrado(Testes* t){ // throw(invalid_argument);
    CodigoSeguranca Testando;
    // Testando se o metodo retorna erro corretamente
    try{
        Testando.setCodigo("codigo invalido");
        t->adicionaErro("Codigo invalido não retornou erro em: CodigoSeguranca_SetValorErrado");
    }
    catch(std::invalid_argument){t->adicionaSucesso();}

    string retorno = Testando.getCodigo();
    // Testando se metodo fez o set invalido
    if(retorno == "codigo invalido"){ 
        t->adicionaErro("Codigo inválido foi setado em: CodigoSeguranca_SetValorErrado");
    }
    else t->adicionaSucesso();
}

void CodigoSeguranca_SetValorValido(Testes* t){
    CodigoSeguranca Testando;
    
    // Testando se o metodo não retorna erro com codigo valido
    try{
        Testando.setCodigo("012");
        t->adicionaSucesso();
    }
    catch(std::invalid_argument){
        t->adicionaErro("Código válido retornou erro: CodigoSeguranca_SetValorValido");
    }

    string retorno = Testando.getCodigo();
    // Testando se metodo fez o set
    if(retorno != "012"){
        t->adicionaErro("Código válido não está sendo efetivado em: CodigoSeguranca_SetValorValido");
    }
    else t->adicionaSucesso();
}

void CodigoSeguranca_SetValorComCaracteres(Testes* t){
    
    CodigoSeguranca Testando;
    
    // Testando se o metodo não deixa entrar letras
    try{
        Testando.setCodigo("01X");
        t->adicionaErro("Código inválido não retornou erro: CodigoSeguranca_SetValorComCaracteres");
    }
    catch(std::invalid_argument){t->adicionaSucesso();}

    string retorno = Testando.getCodigo();
    // Testando se metodo fez o set
    if(retorno == "01X"){
        t->adicionaErro("Código inválido está sendo efetivado em: CodigoSeguranca_SetValorComCaracteres");
    }
    else t->adicionaSucesso();
}

void CodigoSeguranca_SetValorComTamanhoErrado(Testes* t){
    
    CodigoSeguranca Testando;
    
    // Testando se o metodo não deixa entrar letras
    try{
        Testando.setCodigo("012345");
        t->adicionaErro("Código inválido não retornou erro: CodigoSeguranca_SetValorComTamanhoErrado");
    }
    catch(std::invalid_argument){t->adicionaSucesso();}

    string retorno = Testando.getCodigo();
    // Testando se metodo fez o set
    if(retorno == "012345"){
        t->adicionaErro("Código inválido está sendo efetivado em: CodigoSeguranca_SetValorComTamanhoErrado");
    }
    else t->adicionaSucesso();
}

/****** Testes de Data de Validade ********/
void DataValidade_SetValorValido(Testes* t){
    DataValidade Testando;
    string ValidValue = "04/18";
    try{
        Testando.setData(ValidValue);
        t->adicionaSucesso();
    }
    catch(std::invalid_argument){
        t->adicionaErro("Código válido retornando erro em: DataValidade_SetValorValido");
    }

    if(Testando.getData() != ValidValue){
        t->adicionaErro("Código válido não sendo efetivado em: DataValidade_SetValorValido");
    }
    else t->adicionaSucesso();
}

void DataValidade_SetFormatoErrado(Testes* t){
    DataValidade Testando;
    string invalidFormat = "04x18";
    try{
        Testando.setData(invalidFormat);
        t->adicionaErro("Código inválido não retornando erro em: DataValidade_SetFormatoErrado");
    }
    catch(std::invalid_argument){t->adicionaSucesso();}

    if(Testando.getData() == invalidFormat){
        t->adicionaErro("Código inválido sendo efetivado em: DataValidade_SetFormatoErrado");
    }
    else t->adicionaSucesso();
}

void DataValidade_SetForaDoRange(Testes* t){
    DataValidade Testando;
    string invalidFormat = "99/99";
    try{
        Testando.setData(invalidFormat);
        t->adicionaErro("Código inválido não retornando erro em: DataValidade_SetForaDoRange");
    }
    catch(std::invalid_argument){t->adicionaSucesso();}

    if(Testando.getData() == invalidFormat){
        t->adicionaErro("Código inválido sendo efetivado em: DataValidade_SetForaDoRange");
    }
    else t->adicionaSucesso();
}

void DataValidade_SetComLetra(Testes* t){
    DataValidade Testando;
    string invalidFormat = "aa/bb";
    try{
        Testando.setData(invalidFormat);
        t->adicionaErro("Código inválido não retornando erro em: DataValidade_SetComLetra");
    }
    catch(std::invalid_argument){t->adicionaSucesso();}

    if(Testando.getData() == invalidFormat){
        t->adicionaErro("Código inválido sendo efetivado em: DataValidade_SetComLetra");
    }
    else t->adicionaSucesso();
}

void DataValidade_SetComSemValorObrigatorio(Testes* t){
    DataValidade Testando;
    string invalidFormat = "1012";
    try{
        Testando.setData(invalidFormat);
        t->adicionaErro("Código inválido não retornando erro em: SetComSemValorObrigatorio");
    }
    catch(std::invalid_argument){t->adicionaSucesso();}

    if(Testando.getData() == invalidFormat){
        t->adicionaErro("Código inválido sendo efetivado em: SetComSemValorObrigatorio");
    }
    else t->adicionaSucesso();
}

void DataValidade_SetComTamanhoInvalido(Testes* t){
    DataValidade Testando;
    string invalidFormat = "01/123";
    try{
        Testando.setData(invalidFormat);
        t->adicionaErro("Código inválido não retornando erro em: DataValidade_SetComTamanhoInvalido");
    }
    catch(std::invalid_argument){t->adicionaSucesso();}

    if(Testando.getData() == invalidFormat){
        t->adicionaErro("Código inválido sendo efetivado em: DataValidade_SetComTamanhoInvalido");
    }
    else t->adicionaSucesso();
}

void DataValidade_GetMesAno(Testes* t){
    DataValidade Testando;
    string ValidValue = "04/18";
    try{
        Testando.setData(ValidValue);
        t->adicionaSucesso();
    }
    catch(std::invalid_argument){
        t->adicionaErro("Código válido retornando erro em: DataValidade_GetMesAno");
    }

    if(Testando.getData() != ValidValue){
        t->adicionaErro("Código válido não sendo efetivado em: DataValidade_GetMesAno");
    }
    else t->adicionaSucesso();
    if(Testando.getMes() != ValidValue.substr(0,2)){
        t->adicionaErro("Retorno incorreto para mes em: DataValidade_GetMesAno");
    }
    else t->adicionaSucesso();
    if(Testando.getAno() != ValidValue.substr(3,2)){
        t->adicionaErro("Retorno incorreto para ano em: DataValidade_GetMesAno");
    }
    else t->adicionaSucesso();
}

/****** Testes de Numero do cartão ********/
void NumeroCartao_SetValorValido(Testes* t){

}

/****** Rodar todos os testes desse arquivo ********/
void ExecTest::Testes_CreditCard(){
    // Criando instancia que irá armazenar os erros
    Testes creditcard_tests;

    // Começando os testes
    std::cout << "\n==> Inicio dos testes de Cartão de Credito\n";

    /***** Chamando funções de testes *****/
        //Dominio Codigo de segurança
    CodigoSeguranca_SetValorErrado(&creditcard_tests);
    CodigoSeguranca_SetValorValido(&creditcard_tests);
    CodigoSeguranca_SetValorComCaracteres(&creditcard_tests);
    CodigoSeguranca_SetValorComTamanhoErrado(&creditcard_tests);

        // Dominio Data de validade
    DataValidade_SetValorValido(&creditcard_tests);
    DataValidade_SetFormatoErrado(&creditcard_tests);
    DataValidade_SetForaDoRange(&creditcard_tests);
    DataValidade_SetComLetra(&creditcard_tests);
    DataValidade_SetComSemValorObrigatorio(&creditcard_tests);
    DataValidade_SetComTamanhoInvalido(&creditcard_tests);
    DataValidade_GetMesAno(&creditcard_tests);
        
        // Dominio Numero Cartao

    
    // Mostrando resultado no terminal
    creditcard_tests.logAllErros();
    std::cout << "Foram feitos " << creditcard_tests.totalTestes() << " testes.";
    std::cout << "\n==>Fim dos testes de Cartão de Credito\n";

}