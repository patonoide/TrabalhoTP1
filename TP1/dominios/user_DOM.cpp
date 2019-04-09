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
void Senha::setCpf(string cpf){

    this->validarCpf(cpf);
    this->cpf = cpf;
}
void Senha::validarCpf(string cpf){

}
