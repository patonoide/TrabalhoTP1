#include "user_DOM.hpp"

//métodos cpf


string Cpf::getCpf(){
    return this->cpf;
}
void Cpf::setCpf(string cpf){

    this->validarCpf(cpf);
    this->cpf = cpf;
}
void Cpf::validarCpf(string cpf){

}


//métodos senha
string Senha::getSenha(){
    return this->senha;
}
void Senha::setSenha(string senha){

    this->validarSenha(senha);
    this->senha = senha;
}
void Senha::validarSenha(string senha){

}
