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



const string Faixa::classname = "Faixa";
//metodo faixa
void Faixa::setFaixa(string faixa){
    try{
        validarFaixa(faixa);
        this->faixa = faixa;
    }catch(std::invalid_argument){

    }
}
string Faixa::getFaixa(){
    return this->faixa;
}


void Faixa::validarFaixa(string faixa){
    if(faixa.compare("L")!=0)
    if(faixa.compare("10")!=0)
    if(faixa.compare("12")!=0)
    if(faixa.compare("14")!=0)
    if(faixa.compare("16")!=0)
    if(faixa.compare("18")!=0)
    throw std::invalid_argument("deu merda");

}
