#include "testes.hpp"


void CodigoSeguranca_SetValorErrado(Testes::Erros* erros){ // throw(invalid_argument);
    CodigoSeguranca Testando;
    // Testando se o metodo retorna erro corretamente
    try{
        Testando.setCodigo("codigo invalido");
        erros->adicionaErro("Codigo invalido não retornou erro em: CodigoSeguranca_SetValorErrado");
    }
    catch(std::invalid_argument){}

    string retorno = Testando.getCodigo();
    // Testando se metodo fez o set invalido
    if(retorno == "codigo invalido"){ 
        erros->adicionaErro("Codigo inválido foi setado em: CodigoSeguranca_SetValorErrado");
    }
}

void CodigoSeguranca_SetValorCerto(Testes::Erros* erros){
    CodigoSeguranca Testando;
    
    // Testando se o metodo não retorna erro com codigo valido
    try{
        Testando.setCodigo("012");
    }
    catch(std::invalid_argument){
        erros->adicionaErro("Código válido retornou erro: CodigoSeguranca_SetValorCerto");
    }

    string retorno = Testando.getCodigo();
    // Testando se metodo fez o set
    if(retorno != "012"){
        erros->adicionaErro("Código válido não está sendo efetivado em: CodigoSeguranca_SetValorCerto");
    }
}

void CodigoSeguranca_SetValorComCaracteres(Testes::Erros* erros){
    
    CodigoSeguranca Testando;
    
    // Testando se o metodo não deixa entrar letras
    try{
        Testando.setCodigo("01X");
        erros->adicionaErro("Código inválido não retornou erro: CodigoSeguranca_SetValorComCaracteres");
    }
    catch(std::invalid_argument){}

    string retorno = Testando.getCodigo();
    // Testando se metodo fez o set
    if(retorno == "01X"){
        erros->adicionaErro("Código inválido está sendo efetivado em: CodigoSeguranca_SetValorComCaracteres");
    }
}

void CodigoSeguranca_SetValorComTamanhoErrado(Testes::Erros* erros){
    
    CodigoSeguranca Testando;
    
    // Testando se o metodo não deixa entrar letras
    try{
        Testando.setCodigo("012345");
        erros->adicionaErro("Código inválido não retornou erro: CodigoSeguranca_SetValorComTamanhoErrado");
    }
    catch(std::invalid_argument){}

    string retorno = Testando.getCodigo();
    // Testando se metodo fez o set
    if(retorno == "012345"){
        erros->adicionaErro("Código inválido está sendo efetivado em: CodigoSeguranca_SetValorComTamanhoErrado");
    }

}

void DataValidade_SetValorCerto(Testes::Erros* erros){
    DataValidade Testando;
    string ValidValue = "04/18";
    try{
        Testando.setData(ValidValue);
    }
    catch(std::invalid_argument){
        erros->adicionaErro("Código válido retornando erro em: DataValidade_SetValorCerto");
    }

    if(Testando.getData() != ValidValue){
        erros->adicionaErro("Código válido não sendo efetivado em: DataValidade_SetValorCerto");
    }
}

void DataValidade_SetFormatoErrado(Testes::Erros* erros){
    DataValidade Testando;
    string invalidFormat = "04x18";
    try{
        Testando.setData(invalidFormat);
        erros->adicionaErro("Código inválido não retornando erro em: DataValidade_SetFormatoErrado");
    }
    catch(std::invalid_argument){}

    if(Testando.getData() == invalidFormat){
        erros->adicionaErro("Código inválido sendo efetivado em: DataValidade_SetFormatoErrado");
    }
}

void DataValidade_SetForaDoRange(Testes::Erros* erros){
    DataValidade Testando;
    string invalidFormat = "99/99";
    try{
        Testando.setData(invalidFormat);
        erros->adicionaErro("Código inválido não retornando erro em: DataValidade_SetForaDoRange");
    }
    catch(std::invalid_argument){}

    if(Testando.getData() == invalidFormat){
        erros->adicionaErro("Código inválido sendo efetivado em: DataValidade_SetForaDoRange");
    }
}

void DataValidade_SetComLetra(Testes::Erros* erros){
    DataValidade Testando;
    string invalidFormat = "aa/bb";
    try{
        Testando.setData(invalidFormat);
        erros->adicionaErro("Código inválido não retornando erro em: DataValidade_SetComLetra");
    }
    catch(std::invalid_argument){}

    if(Testando.getData() == invalidFormat){
        erros->adicionaErro("Código inválido sendo efetivado em: DataValidade_SetComLetra");
    }
}

void DataValidade_SetComSemValorObrigatorio(Testes::Erros* erros){
    DataValidade Testando;
    string invalidFormat = "1012";
    try{
        Testando.setData(invalidFormat);
        erros->adicionaErro("Código inválido não retornando erro em: SetComSemValorObrigatorio");
    }
    catch(std::invalid_argument){}

    if(Testando.getData() == invalidFormat){
        erros->adicionaErro("Código inválido sendo efetivado em: SetComSemValorObrigatorio");
    }
}

void DataValidade_SetComTamanhoInvalido(Testes::Erros* erros){
    DataValidade Testando;
    string invalidFormat = "01/123";
    try{
        Testando.setData(invalidFormat);
        erros->adicionaErro("Código inválido não retornando erro em: DataValidade_SetComTamanhoInvalido");
    }
    catch(std::invalid_argument){}

    if(Testando.getData() == invalidFormat){
        erros->adicionaErro("Código inválido sendo efetivado em: DataValidade_SetComTamanhoInvalido");
    }
}

void DataValidade_GetMesAno(Testes::Erros* erros){
    DataValidade Testando;
    string ValidValue = "04/18";
    try{
        Testando.setData(ValidValue);
    }
    catch(std::invalid_argument){
        erros->adicionaErro("Código válido retornando erro em: DataValidade_GetMesAno");
    }

    if(Testando.getData() != ValidValue){
        erros->adicionaErro("Código válido não sendo efetivado em: DataValidade_GetMesAno");
    }
    if(Testando.getMes() != ValidValue.substr(0,2)){
        erros->adicionaErro("Retorno incorreto para mes em: DataValidade_GetMesAno");
    }
    if(Testando.getAno() != ValidValue.substr(3,2)){
        erros->adicionaErro("Retorno incorreto para ano em: DataValidade_GetMesAno");
    }
}

void Testes::RodarTestes_CreditCard(){
    // Criando instancia que irá armazenar os erros
    Testes::Erros erros;

    // Começando os testes
    std::cout << "\n==> Inicio dos testes de Cartão de Credito\n";

    /***** Chamando funções de testes *****/
        //Dominio Codigo de segurança
    CodigoSeguranca_SetValorErrado(&erros);
    CodigoSeguranca_SetValorCerto(&erros);
    CodigoSeguranca_SetValorComCaracteres(&erros);
    CodigoSeguranca_SetValorComTamanhoErrado(&erros);

        // Dominio Data de validade
    DataValidade_SetValorCerto(&erros);
    DataValidade_SetFormatoErrado(&erros);
    DataValidade_SetForaDoRange(&erros);
    DataValidade_SetComLetra(&erros);
    DataValidade_SetComSemValorObrigatorio(&erros);
    DataValidade_SetComTamanhoInvalido(&erros);

    // Mostrando resultado no terminal
    erros.logAllErros();

    std::cout << "\n==>Fim dos testes de Cartão de Credito\n";


}