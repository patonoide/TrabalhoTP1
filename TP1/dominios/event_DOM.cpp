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




//metodos Cidade
string Cidade::getCidade(){
    return this->cidade;
}

void Cidade::validarCidade(string cidade){

}

void Cidade::setCidade(string cidade){
this->cidade  = cidade;
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

void Classe::setClasse(string classe){
    this->classe = classe;
}

//metodo faixa

void Faixa::validarFaixa(string faixa){
    if(!faixa.compare("L"))

    throw std::invalid_argument("deu merda");

}
