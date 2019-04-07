#include "testes.hpp"

/****** Testes de Codigo de Segurança ********/
void CodigoSeguranca_SetValorErrado(Testes* t, string invalidValue){ // throw(invalid_argument);
    CodigoSeguranca Testando;
    // Testando se o metodo retorna erro corretamente
    try{
        Testando.setCodigo(invalidValue);
        t->adicionaErro("CodigoSeguranca_SetValorErrado: Codigo supostamente invalido \""+invalidValue+"\" não retornou erro");
    }
    catch(std::invalid_argument){t->adicionaSucesso();}

    // Testando se metodo fez o set invalido
    t->stringIsNotEq(Testando.getCodigo(), invalidValue, "CodigoSeguranca_SetValorErrado: Codigo supostamente inválido \""+invalidValue+"\" foi efetivado");
}

void CodigoSeguranca_SetValorValido(Testes* t, string valorValido){
    CodigoSeguranca Testando;
    
    // Testando se o metodo não retorna erro com codigo valido
    try{
        Testando.setCodigo(valorValido);
        t->adicionaSucesso();
    }
    catch(std::invalid_argument){
        t->adicionaErro("CodigoSeguranca_SetValorValido: Código supostamente válido \""+valorValido+"\" retornou erro");
    }

    // Testando se metodo fez o set
    t->stringIsEq(Testando.getCodigo(), valorValido, "CodigoSeguranca_SetValorValido: Código supostamente válido não está sendo efetivado");
}

/****** Testes de Data de Validade ********/
void DataValidade_SetValorValido(Testes* t, string valorValido){
    DataValidade Testando;
    try{
        Testando.setData(valorValido);
        t->adicionaSucesso();
    }
    catch(std::invalid_argument){
        t->adicionaErro("DataValidade_SetValorValido: Código supostamente válido \""+valorValido+"\" retornando erro");
    }
    t->stringIsEq(Testando.getData(), valorValido, "DataValidade_SetValorValido: Código supostamente válido \"" +valorValido+ "\" não está sendo efetivado");
}

void DataValidade_SetValorInvalido(Testes* t, string invalidValue){
    DataValidade Testando;
    try{
        Testando.setData(invalidValue);
        t->adicionaErro("DataValidade_SetValorInvalido: Código supostamente inválido \"" +invalidValue+ "\" não retornando erro");
    }
    catch(std::invalid_argument){t->adicionaSucesso();}

    t->stringIsNotEq(Testando.getData(), invalidValue, "DataValidade_SetValorInvalido: Código supostamente inválido \"" +invalidValue+ "\" sendo efetivado");
}

void DataValidade_GetMesAno(Testes* t, string valorValido){
    DataValidade Testando;
    try{
        Testando.setData(valorValido);
        t->adicionaSucesso();
    }
    catch(std::invalid_argument){
        t->adicionaErro("DataValidade_GetMesAno: Código supostamente válido \""+valorValido+"\" retornando erro");
    }

    if(Testando.getData() != valorValido){
        t->adicionaErro("DataValidade_GetMesAno: Código supostamente válido \""+valorValido+"\"  não sendo efetivado");
    }
    else t->adicionaSucesso();
    if(Testando.getMes() != valorValido.substr(0,2)){
        t->adicionaErro("DataValidade_GetMesAno: Retorno incorreto para mes");
    }
    else t->adicionaSucesso();
    if(Testando.getAno() != valorValido.substr(3,2)){
        t->adicionaErro("DataValidade_GetMesAno: Retorno incorreto para ano");
    }
    else t->adicionaSucesso();
}

/****** Testes de Numero do cartão ********/
void NumeroCartao_SetValorValido(Testes* t, string valorValido){
    NumeroCartao Testando;
    // Tenta efetivar valor passado:
    try{
        Testando.setNumero(valorValido);
        t->adicionaSucesso();
    }
    catch(std::invalid_argument){
        t->adicionaErro("NumeroCartao_SetValorValido: Numero \""+valorValido+"\" supostamente válido retorna erro.");
    }

    // Tenta acessar valor salvo
    if(Testando.getNumero() == valorValido){
        t->adicionaSucesso();
    }
    else{
        t->adicionaErro("NumeroCartao_SetValorValido: Numero \""+valorValido+" \"  supostamente válido não foi salvo.");
    }
}

void NumeroCartao_SetValorInvalido(Testes* t, string valorInvalido){
    NumeroCartao Testando;
    // Tenta efetivar valor passado:
    try{
        Testando.setNumero(valorInvalido);
        t->adicionaErro("NumeroCartao_SetvalorInvalido: Numero \""+valorInvalido+"\" supostamente inválido não retorna erro.");
    }
    catch(std::invalid_argument){
        t->adicionaSucesso();
    }

    // Tenta acessar valor salvo
    if(Testando.getNumero() == valorInvalido){
        t->adicionaErro("NumeroCartao_SetvalorInvalido: Numero \""+valorInvalido+" \"  supostamente inválido foi salvo.");
    }
    else{
        t->adicionaSucesso();
    }
}

/****** Rodar todos os testes desse arquivo ********/
void ExecTest::Testes_CreditCard(){
    // Criando instancia que irá armazenar os erros
    Testes creditcard_tests;

    // Começando os testes
    std::cout << "\n==> Inicio dos testes de Cartão de Credito\n";

    /***** Chamando funções de testes *****/
        //Dominio Codigo de segurança
    CodigoSeguranca_SetValorValido(&creditcard_tests, "012");           // Testando um valor valido
    CodigoSeguranca_SetValorErrado(&creditcard_tests, "qualquercoisa"); // Valor invalido: absurdo
    CodigoSeguranca_SetValorErrado(&creditcard_tests, "0x2");           // Valor invalido: caracter
    CodigoSeguranca_SetValorErrado(&creditcard_tests, "0123");          // Valor invalido: tamanho maior
    CodigoSeguranca_SetValorErrado(&creditcard_tests, "01");            // Valor invalido: tamanho menor
    CodigoSeguranca_SetValorErrado(&creditcard_tests, "-012");          // Valor invalido: negativo

        // Dominio Data de validade
    DataValidade_SetValorValido(&creditcard_tests, "01/18");            // Testando um valor valido
    DataValidade_SetValorInvalido(&creditcard_tests, "qualquercoisa");  // Valor invalido: absurdo
    DataValidade_SetValorInvalido(&creditcard_tests, "99/99");          // Valor invalido: mes fora do alcance
    DataValidade_SetValorInvalido(&creditcard_tests, "0418");           // Valor invalido: formato XXXX
    DataValidade_SetValorInvalido(&creditcard_tests, "aa/bb");          // Valor invalido: caracter
    DataValidade_SetValorInvalido(&creditcard_tests, "10 12");          // Valor invalido: formato XX XX
    DataValidade_SetValorInvalido(&creditcard_tests, "01/123");         // Valor invalido: ano fora do alcance
    DataValidade_GetMesAno(&creditcard_tests, "04/18");                 // Testando um valor valido
        
        // Dominio Numero Cartao
    //TODO: Terminar de elaborar esses testes
    // https://en.wikipedia.org/wiki/Luhn_algorithm
    //NumeroCartao_SetValorValido(&creditcard_tests, 1);
    NumeroCartao_SetValorInvalido(&creditcard_tests,"1");                // Valor inválido: tamanho menor
    NumeroCartao_SetValorInvalido(&creditcard_tests,"12345678901234567");// Valor inválido: tamanho maior
    NumeroCartao_SetValorInvalido(&creditcard_tests,"xx3456789012345xx");// Valor inválido: tamanho maior
    
    // Mostrando resultado no terminal
    creditcard_tests.logAllErros();
    std::cout << "Foram feitos " << creditcard_tests.totalTestes() << " testes.";
    std::cout << "\n==>Fim dos testes de Cartão de Credito\n";

}