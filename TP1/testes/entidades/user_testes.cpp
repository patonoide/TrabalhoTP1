#include "TU_ENT.hpp"

void TUUser::testeCpfValida(Cpf &valid){
    try{
        this->testando.setCpf(valid);
        this->estado.adicionaSucesso();
    }
    catch(std::invalid_argument){
        this->estado.adicionaErro("TUUser: setCpfValido retornou erro.");
    }

    if(this->testando.getCpf().getValor() != valid.getValor()){
        this->estado.adicionaErro("TUUser: setCpfValido não efetivou valor");
    }
    else{
        this->estado.adicionaSucesso();
    }
}

void TUUser::testeSenhaValida(Senha &valid){
    try{
        this->testando.setSenha(valid);
        this->estado.adicionaSucesso();
    }
    catch(std::invalid_argument){
        this->estado.adicionaErro("TUUser: setSenhaValido retornou erro.");
    }

    if(this->testando.getSenha().getValor() != valid.getValor()){
        this->estado.adicionaErro("TUUser: setSenhaValido não efetivou valor");
    }
    else{
        this->estado.adicionaSucesso();
    }
}

void TUUser::runTestes(){
    Cpf cpf;
    Senha senha;

    cpf.setValor("033.419.661-29");
    senha.setValor("Abcde1");

    this->testeCpfValida(cpf);
    this->testeSenhaValida(senha);

    std::cout << "Foram feitos " << this->estado.totalTestes() << " testes para User.";
    this->estado.logAllErros();
}