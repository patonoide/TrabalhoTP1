#include "presentation_DOM.hpp"
#include <iostream>
/************** COdigo Apresentacao ***************/
const string CodigoApresentacao::classname = "Codigo de Apresentação";

/************** Data ***************/
// Metodos de Data
const string Data::classname = "Data";
void Data::validarValor(string str){
    //TODO: Anos bissextos
    if(str[2] != '/' || str[5] != '/' || str.length() > 8){
        throw std::invalid_argument("Formato de dadta invalido");
    }
    if(std::stoi(str.substr(0,2)) > 31 || std::stoi(str.substr(0,2)) == 0 ){
        throw std::invalid_argument("Formato de dadta invalido");
    }
    if(std::stoi(str.substr(3,2)) > 12 || std::stoi(str.substr(3,2)) == 0 ){
        throw std::invalid_argument("Formato de dadta invalido");
    }
}
void Data::setValor(string str){// throw(invalid_argument){
    this->validarValor(str);
    this->valor = str;
}
string Data::getValor(){
    return this->valor;
}

/************** Horario ***************/
// Metodos de Horario
const string Horario::classname = "Horario";
void Horario::validarValor(string){
    
}
void Horario::setValor(string){// throw(invalid_argument){

}
string Horario::getValor(){
    return "to implement";
}

/************** Preco ***************/
// Metodos de Preco
void Preco::validarValor(string){
    
}
const string Preco::classname = "Preco";
void Preco::setValor(string){// throw(invalid_argument){

}
string Preco::getValor(){
    return "to implement";
}

/************** NumeroSala ***************/
// Metodos de NumeroSala
void NumeroSala::validarValor(string){
    
}
const string NumeroSala::classname = "NumeroSala";
void NumeroSala::setValor(string){// throw(invalid_argument){

}
string NumeroSala::getValor(){
    return "to implement";
}

/************** Disponibilidade ***************/
// Metodos de Disponibilidade
void Disponibilidade::validarValor(string){
    
}
const string Disponibilidade::classname = "Disponibilidade";
void Disponibilidade::setValor(string){// throw(invalid_argument){

}
string Disponibilidade::getValor(){
    return "to implement";
}
