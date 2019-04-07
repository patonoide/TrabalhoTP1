#include "TU_DOM.hpp"

/****** Testes de Codigo de Segurança ********/
void TUCodigoSeguranca::SetValorInvalido(string invalidValue){ // throw(invalid_argument);
    CodigoSeguranca Testando;
    // Testando se o metodo retorna erro corretamente
    try{
        Testando.setCodigo(invalidValue);
        this->estado.adicionaErro(" TUCodigoSeguranca::SetValorInvalido: Codigo supostamente invalido \""+invalidValue+"\" não retornou erro");
    }
    catch(std::invalid_argument){this->estado.adicionaSucesso();}

    // Testando se metodo fez o set invalido
    this->estado.stringIsNotEq(Testando.getCodigo(), invalidValue, " TUCodigoSeguranca::SetValorInvalido: Codigo supostamente inválido \""+invalidValue+"\" foi efetivado");
}

void TUCodigoSeguranca::SetValorValido(string valorValido){
    CodigoSeguranca Testando;
    
    // Testando se o metodo não retorna erro com codigo valido
    try{
        Testando.setCodigo(valorValido);
        this->estado.adicionaSucesso();
    }
    catch(std::invalid_argument){
        this->estado.adicionaErro(" TUCodigoSeguranca::SetValorValido: Código supostamente válido \""+valorValido+"\" retornou erro");
    }

    // Testando se metodo fez o set
    this->estado.stringIsEq(Testando.getCodigo(), valorValido, " TUCodigoSeguranca::SetValorValido: Código supostamente válido não está sendo efetivado");
}

void TUCodigoSeguranca::runTestes(){
    /***** Chamando funções de testes *****/
    TUCodigoSeguranca::SetValorValido("012");             // Testando um valor valido
    TUCodigoSeguranca::SetValorInvalido("qualquercoisa"); // Valor invalido: absurdo
    TUCodigoSeguranca::SetValorInvalido("0x2");           // Valor invalido: caracter
    TUCodigoSeguranca::SetValorInvalido("0123");          // Valor invalido: tamanho maior
    TUCodigoSeguranca::SetValorInvalido("01");            // Valor invalido: tamanho menor
    TUCodigoSeguranca::SetValorInvalido("-012");          // Valor invalido: negativo

    // Mostrando resultado no terminal
    std::cout << "Foram feitos " << this->estado.totalTestes() << " testes para CodigoSeguranca.";
    this->estado.logAllErros();
}

/****** Testes de Data de Validade ********/
void TUDataValidade::SetValorValido(string valorValido){
    DataValidade Testando;
    try{
        Testando.setData(valorValido);
        this->estado.adicionaSucesso();
    }
    catch(std::invalid_argument){
        this->estado.adicionaErro("TUDataValidade::SetValorValido: Código supostamente válido \""+valorValido+"\" retornando erro");
    }
    this->estado.stringIsEq(Testando.getData(), valorValido, "TUDataValidade::SetValorValido: Código supostamente válido \"" +valorValido+ "\" não está sendo efetivado");
}

void TUDataValidade::SetValorInvalido(string invalidValue){
    DataValidade Testando;
    try{
        Testando.setData(invalidValue);
        this->estado.adicionaErro("TUDataValidade::SetValorInvalido: Código supostamente inválido \"" +invalidValue+ "\" não retornando erro");
    }
    catch(std::invalid_argument){this->estado.adicionaSucesso();}

    this->estado.stringIsNotEq(Testando.getData(), invalidValue, "TUDataValidade::SetValorInvalido: Código supostamente inválido \"" +invalidValue+ "\" sendo efetivado");
}

void TUDataValidade::GetMesAno(string valorValido){
    DataValidade Testando;
    try{
        Testando.setData(valorValido);
        this->estado.adicionaSucesso();
    }
    catch(std::invalid_argument){
        this->estado.adicionaErro("TUDataValidade::GetMesAno: Código supostamente válido \""+valorValido+"\" retornando erro");
    }

    if(Testando.getData() != valorValido){
        this->estado.adicionaErro("TUDataValidade::GetMesAno: Código supostamente válido \""+valorValido+"\"  não sendo efetivado");
    }
    else this->estado.adicionaSucesso();
    if(Testando.getMes() != valorValido.substr(0,2)){
        this->estado.adicionaErro("TUDataValidade::GetMesAno: Retorno incorreto para mes");
    }
    else this->estado.adicionaSucesso();
    if(Testando.getAno() != valorValido.substr(3,2)){
        this->estado.adicionaErro("TUDataValidade::GetMesAno: Retorno incorreto para ano");
    }
    else this->estado.adicionaSucesso();
}

void TUDataValidade::runTestes(){
    /***** Chamando funções de testes *****/
        // Dominio Data de validade
    TUDataValidade::SetValorValido("01/18");            // Testando um valor valido
    TUDataValidade::SetValorInvalido("qualquercoisa");  // Valor invalido: absurdo
    TUDataValidade::SetValorInvalido("99/99");          // Valor invalido: mes fora do alcance
    TUDataValidade::SetValorInvalido("0418");           // Valor invalido: formato XXXX
    TUDataValidade::SetValorInvalido("aa/bb");          // Valor invalido: caracter
    TUDataValidade::SetValorInvalido("10 12");          // Valor invalido: formato XX XX
    TUDataValidade::SetValorInvalido("01/123");         // Valor invalido: ano fora do alcance
    TUDataValidade::GetMesAno("04/18");                 // Testando um valor valido

    // Mostrando resultado no terminal
    std::cout << "Foram feitos " << this->estado.totalTestes() << " testes para Data de Validade.";
    this->estado.logAllErros();
}

/****** Testes de Numero do cartão ********/
void TUNumeroCartao::SetValorValido(string valorValido){
    NumeroCartao Testando;
    // Tenta efetivar valor passado:
    try{
        Testando.setNumero(valorValido);
        this->estado.adicionaSucesso();
    }
    catch(std::invalid_argument){
        this->estado.adicionaErro("TUNumeroCartao::SetValorValido: Numero \""+valorValido+"\" supostamente válido retorna erro.");
    }

    // Tenta acessar valor salvo
    if(Testando.getNumero() == valorValido){
        this->estado.adicionaSucesso();
    }
    else{
        this->estado.adicionaErro("TUNumeroCartao::SetValorValido: Numero \""+valorValido+" \"  supostamente válido não foi salvo.");
    }
}

void TUNumeroCartao::SetValorInvalido(string valorInvalido){
    NumeroCartao Testando;
    // Tenta efetivar valor passado:
    try{
        Testando.setNumero(valorInvalido);
        this->estado.adicionaErro("TUNumeroCartao::SetvalorInvalido: Numero \""+valorInvalido+"\" supostamente inválido não retorna erro.");
    }
    catch(std::invalid_argument){
        this->estado.adicionaSucesso();
    }

    // Tenta acessar valor salvo
    if(Testando.getNumero() == valorInvalido){
        this->estado.adicionaErro("TUNumeroCartao::SetvalorInvalido: Numero \""+valorInvalido+" \"  supostamente inválido foi salvo.");
    }
    else{
        this->estado.adicionaSucesso();
    }
}

void TUNumeroCartao::runTestes(){
    /***** Chamando funções de testes *****/
    TUNumeroCartao::SetValorInvalido("1");                // Valor inválido: tamanho menor
    TUNumeroCartao::SetValorInvalido("12345678901234567");// Valor inválido: tamanho maior
    TUNumeroCartao::SetValorInvalido("xx3456789012345xx");// Valor inválido: tamanho maior

    // Mostrando resultado no terminal
    std::cout << "Foram feitos " << this->estado.totalTestes() << " testes para NumeroCartao.";
    this->estado.logAllErros();
}
