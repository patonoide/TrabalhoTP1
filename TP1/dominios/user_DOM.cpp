#include "user_DOM.hpp"

//métodos cpf


string Cpf::getCpf(){
    return this->cpf;
}
void Cpf::setCpf(string cpf){

    cpf = this->validarCpf(cpf);
    this->cpf = cpf;
}
string Cpf::validarCpf(string cpf){
    return cpf
}


//métodos senha
string Senha::getSenha(){
    return this->senha;
}
void Senha::setCpf(string cpf){

    cpf = validarCpf(cpf);
    this->cpf = cpf;
}
string Senha::validarCpf(string cpf){
    return cpf
}
