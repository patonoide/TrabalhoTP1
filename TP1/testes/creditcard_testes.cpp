#include "TU_DOM.hpp"

/****** Testes de Codigo de Segurança ********/
void TUCodigoSeguranca::SetValorInvalido(Testes* t, string invalidValue){ // throw(invalid_argument);
    CodigoSeguranca Testando;
    // Testando se o metodo retorna erro corretamente
    try{
        Testando.setCodigo(invalidValue);
        t->adicionaErro(" TUCodigoSeguranca::SetValorInvalido: Codigo supostamente invalido \""+invalidValue+"\" não retornou erro");
    }
    catch(std::invalid_argument){t->adicionaSucesso();}

    // Testando se metodo fez o set invalido
    t->stringIsNotEq(Testando.getCodigo(), invalidValue, " TUCodigoSeguranca::SetValorInvalido: Codigo supostamente inválido \""+invalidValue+"\" foi efetivado");
}

void TUCodigoSeguranca::SetValorValido(Testes* t, string valorValido){
    CodigoSeguranca Testando;
    
    // Testando se o metodo não retorna erro com codigo valido
    try{
        Testando.setCodigo(valorValido);
        t->adicionaSucesso();
    }
    catch(std::invalid_argument){
        t->adicionaErro(" TUCodigoSeguranca::SetValorValido: Código supostamente válido \""+valorValido+"\" retornou erro");
    }

    // Testando se metodo fez o set
    t->stringIsEq(Testando.getCodigo(), valorValido, " TUCodigoSeguranca::SetValorValido: Código supostamente válido não está sendo efetivado");
}

void TUCodigoSeguranca::runTestes(){
    // Criando instancia que irá armazenar os erros
    Testes codigo_testes;

    // Começando os testes
    std::cout << "\n==> Inicio dos testes de CodigoSeguranca\n";

    /***** Chamando funções de testes *****/
    TUCodigoSeguranca::SetValorValido(&codigo_testes, "012");           // Testando um valor valido
    TUCodigoSeguranca::SetValorInvalido(&codigo_testes, "qualquercoisa"); // Valor invalido: absurdo
    TUCodigoSeguranca::SetValorInvalido(&codigo_testes, "0x2");           // Valor invalido: caracter
    TUCodigoSeguranca::SetValorInvalido(&codigo_testes, "0123");          // Valor invalido: tamanho maior
    TUCodigoSeguranca::SetValorInvalido(&codigo_testes, "01");            // Valor invalido: tamanho menor
    TUCodigoSeguranca::SetValorInvalido(&codigo_testes, "-012");          // Valor invalido: negativo

    // Mostrando resultado no terminal
    codigo_testes.logAllErros();
    std::cout << "Foram feitos " << codigo_testes.totalTestes() << " testes.";
    std::cout << "\n==>Fim dos testes de CodigoSeguranca\n";
}

/****** Testes de Data de Validade ********/
void TUDataValidade::SetValorValido(Testes* t, string valorValido){
    DataValidade Testando;
    try{
        Testando.setData(valorValido);
        t->adicionaSucesso();
    }
    catch(std::invalid_argument){
        t->adicionaErro("TUDataValidade::SetValorValido: Código supostamente válido \""+valorValido+"\" retornando erro");
    }
    t->stringIsEq(Testando.getData(), valorValido, "TUDataValidade::SetValorValido: Código supostamente válido \"" +valorValido+ "\" não está sendo efetivado");
}

void TUDataValidade::SetValorInvalido(Testes* t, string invalidValue){
    DataValidade Testando;
    try{
        Testando.setData(invalidValue);
        t->adicionaErro("TUDataValidade::SetValorInvalido: Código supostamente inválido \"" +invalidValue+ "\" não retornando erro");
    }
    catch(std::invalid_argument){t->adicionaSucesso();}

    t->stringIsNotEq(Testando.getData(), invalidValue, "TUDataValidade::SetValorInvalido: Código supostamente inválido \"" +invalidValue+ "\" sendo efetivado");
}

void TUDataValidade::GetMesAno(Testes* t, string valorValido){
    DataValidade Testando;
    try{
        Testando.setData(valorValido);
        t->adicionaSucesso();
    }
    catch(std::invalid_argument){
        t->adicionaErro("TUDataValidade::GetMesAno: Código supostamente válido \""+valorValido+"\" retornando erro");
    }

    if(Testando.getData() != valorValido){
        t->adicionaErro("TUDataValidade::GetMesAno: Código supostamente válido \""+valorValido+"\"  não sendo efetivado");
    }
    else t->adicionaSucesso();
    if(Testando.getMes() != valorValido.substr(0,2)){
        t->adicionaErro("TUDataValidade::GetMesAno: Retorno incorreto para mes");
    }
    else t->adicionaSucesso();
    if(Testando.getAno() != valorValido.substr(3,2)){
        t->adicionaErro("TUDataValidade::GetMesAno: Retorno incorreto para ano");
    }
    else t->adicionaSucesso();
}

void TUDataValidade::runTestes(){
    // Criando instancia que irá armazenar os erros
    Testes data_testes;

    // Começando os testes
    std::cout << "\n==> Inicio dos testes de Data de Validade \n";

    /***** Chamando funções de testes *****/
        // Dominio Data de validade
    TUDataValidade::SetValorValido(&data_testes, "01/18");            // Testando um valor valido
    TUDataValidade::SetValorInvalido(&data_testes, "qualquercoisa");  // Valor invalido: absurdo
    TUDataValidade::SetValorInvalido(&data_testes, "99/99");          // Valor invalido: mes fora do alcance
    TUDataValidade::SetValorInvalido(&data_testes, "0418");           // Valor invalido: formato XXXX
    TUDataValidade::SetValorInvalido(&data_testes, "aa/bb");          // Valor invalido: caracter
    TUDataValidade::SetValorInvalido(&data_testes, "10 12");          // Valor invalido: formato XX XX
    TUDataValidade::SetValorInvalido(&data_testes, "01/123");         // Valor invalido: ano fora do alcance
    TUDataValidade::GetMesAno(&data_testes, "04/18");                 // Testando um valor valido

    // Mostrando resultado no terminal
    data_testes.logAllErros();
    std::cout << "Foram feitos " << data_testes.totalTestes() << " testes.";
    std::cout << "\n==>Fim dos testes de Data de Validade \n";
}

/****** Testes de Numero do cartão ********/
void TUNumeroCartao::SetValorValido(Testes* t, string valorValido){
    NumeroCartao Testando;
    // Tenta efetivar valor passado:
    try{
        Testando.setNumero(valorValido);
        t->adicionaSucesso();
    }
    catch(std::invalid_argument){
        t->adicionaErro("TUNumeroCartao::SetValorValido: Numero \""+valorValido+"\" supostamente válido retorna erro.");
    }

    // Tenta acessar valor salvo
    if(Testando.getNumero() == valorValido){
        t->adicionaSucesso();
    }
    else{
        t->adicionaErro("TUNumeroCartao::SetValorValido: Numero \""+valorValido+" \"  supostamente válido não foi salvo.");
    }
}

void TUNumeroCartao::SetValorInvalido(Testes* t, string valorInvalido){
    NumeroCartao Testando;
    // Tenta efetivar valor passado:
    try{
        Testando.setNumero(valorInvalido);
        t->adicionaErro("TUNumeroCartao::SetvalorInvalido: Numero \""+valorInvalido+"\" supostamente inválido não retorna erro.");
    }
    catch(std::invalid_argument){
        t->adicionaSucesso();
    }

    // Tenta acessar valor salvo
    if(Testando.getNumero() == valorInvalido){
        t->adicionaErro("TUNumeroCartao::SetvalorInvalido: Numero \""+valorInvalido+" \"  supostamente inválido foi salvo.");
    }
    else{
        t->adicionaSucesso();
    }
}

void TUNumeroCartao::runTestes(){
    // Criando instancia que irá armazenar os erros
    Testes codigo_testes;

    // Começando os testes
    std::cout << "\n==> Inicio dos testes de  Numero do cartão\n";

    /***** Chamando funções de testes *****/
    TUNumeroCartao::SetValorInvalido(&codigo_testes,"1");                // Valor inválido: tamanho menor
    TUNumeroCartao::SetValorInvalido(&codigo_testes,"12345678901234567");// Valor inválido: tamanho maior
    TUNumeroCartao::SetValorInvalido(&codigo_testes,"xx3456789012345xx");// Valor inválido: tamanho maior

    // Mostrando resultado no terminal
    codigo_testes.logAllErros();
    std::cout << "Foram feitos " << codigo_testes.totalTestes() << " testes.";
    std::cout << "\n==>Fim dos testes de  Numero do cartão\n";
}
