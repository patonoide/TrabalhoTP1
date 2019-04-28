#include "TU_DOM.hpp"

/****** Testes de Codigo de Segurança ********/
void TUCodigoSeguranca::runTestes(){
    /***** Chamando funções de testes *****/
    this->SetValorValido<CodigoSeguranca>("012");             // Testando um valor valido
    this->SetValorInvalido<CodigoSeguranca>("qualquercoisa"); // Valor invalido: absurdo
    this->SetValorInvalido<CodigoSeguranca>("0x2");           // Valor invalido: caracter
    this->SetValorInvalido<CodigoSeguranca>("0123");          // Valor invalido: tamanho maior
    this->SetValorInvalido<CodigoSeguranca>("01");            // Valor invalido: tamanho menor
    this->SetValorInvalido<CodigoSeguranca>("-012");          // Valor invalido: negativo

    // Mostrando resultado no terminal
    std::cout << "Foram feitos " << this->estado.totalTestes() << " testes para CodigoSeguranca.";
    this->estado.logAllErros();
}


/****** Testes de Data de Validade ********/
void TUDataValidade::GetMesAno(string valorValido){
    DataValidade Testando;
    try{
        Testando.setValor(valorValido);
        this->estado.adicionaSucesso();
    }
    catch(std::invalid_argument){
        this->estado.adicionaErro("TUDataValidade::GetMesAno: Código supostamente válido \""+valorValido+"\" retornando erro");
    }

    if(Testando.getValor() != valorValido){
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
    this->SetValorValido<DataValidade>("01/18");            // Testando um valor valido
    this->SetValorInvalido<DataValidade>("qualquercoisa");  // Valor invalido: absurdo
    this->SetValorInvalido<DataValidade>("99/99");          // Valor invalido: mes fora do alcance
    this->SetValorInvalido<DataValidade>("0418");           // Valor invalido: formato XXXX
    this->SetValorInvalido<DataValidade>("aa/bb");          // Valor invalido: caracter
    this->SetValorInvalido<DataValidade>("10 12");          // Valor invalido: formato XX XX
    this->SetValorInvalido<DataValidade>("01/123");         // Valor invalido: ano fora do alcance
    this->GetMesAno("04/18");                 // Testando um valor valido

    // Mostrando resultado no terminal
    std::cout << "Foram feitos " << this->estado.totalTestes() << " testes para Data de Validade.";
    this->estado.logAllErros();
}


/****** Testes de Numero do cartão ********/
void TUNumeroCartao::runTestes(){
    /***** Chamando funções de testes *****/
    this->SetValorValido<NumeroCartao>("4863231001094886");            // Testando um valor valido
    this->SetValorInvalido<NumeroCartao>("1");                // Valor inválido: tamanho menor
    this->SetValorInvalido<NumeroCartao>("12345678901234567");// Valor inválido: tamanho maior
    this->SetValorInvalido<NumeroCartao>("xx3456789012345xx");// Valor inválido: tamanho maior

    // Mostrando resultado no terminal
    std::cout << "Foram feitos " << this->estado.totalTestes() << " testes para NumeroCartao.";
    this->estado.logAllErros();
}
