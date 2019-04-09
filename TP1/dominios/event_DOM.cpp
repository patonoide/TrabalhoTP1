#include "event_DOM.hpp"

//metodos name
string Name::getName(){
    return this->name;

}
void Name::validarName(string name){

}

void Name::setName(string name){

    this->name = name;
}


//metodos cpf
string Cpf::getCpf(){
    return this->cpf;
}
void Cpf::validarCpf(string cpf ){

}
void Cpf::setCpf(string cpf){

this->cpf = cpf;

}

//metodos Cidade
string Cidade::getCidade(){
    return this->cidade;
}

void Cidade::validarCidade(string cidade){

}

void Cidade::setCidade(string cidade){
this->cidade  = cidade
}

//metodos Estado

string Estado::getEstado(){
    return this->estado;
}

void Estado::validarEstado(string estado){

}
void Estado::setEstado(string estado){
    this->estado = estado;
}

//metodos classe

string Classe::getClasse(){
    return this->classe;
}
void Classe::validarClasse(string classe){

}
