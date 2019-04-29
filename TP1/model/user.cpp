#include "user.hpp"

void User::setCpf(Cpf &toSet){this->cpf = toSet;}
Cpf User::getCpf(){return this->cpf;}

void User::setSenha(Senha &toSet){this->senha = toSet;}
Senha User::getSenha(){return this->senha;}
