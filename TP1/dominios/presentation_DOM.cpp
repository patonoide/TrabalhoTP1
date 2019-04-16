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
        throw std::invalid_argument("Formato de data invalido");
    }
    if(std::stoi(str.substr(3,2)) > 12 || std::stoi(str.substr(3,2)) == 0 ){
        throw std::invalid_argument("Formato de data invalido");
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
void Horario::validarValor(string str){
    if(str[2] != ':') throw std::invalid_argument("Formato de horário inválido");
    if(std::stoi(str.substr(0,2))<7 || std::stoi(str.substr(0,2)) > 22)
        throw std::invalid_argument("Horário inválido: hora invalida");
    switch (std::stoi(str.substr(3,2)))
    {
        case 00:
        break;
        case 15:
        break;
        case 30:
        break;
        case 45:
        break;
        default:
            throw std::invalid_argument("Horário inválido: minutos invalidos");
        break;
    }
}
void Horario::setValor(string str){// throw(invalid_argument){
    validarValor(str);
    this->valor = str;
}
string Horario::getValor(){
    return this->valor;
}

/************** Preco ***************/
// Metodos de Preco
void Preco::validarValor(string str){
    for(int i=0; i< (int)str.length(); i++){
        if( ! (str[i] == ',' || std::isdigit(str.at(i)))  ){
            throw std::invalid_argument("Preco: Formato inválido");
        }
    }
}
const string Preco::classname = "Preco";
void Preco::setValor(string str){// throw(invalid_argument){
    validarValor(str);
    this->valor = str;
}
string Preco::getValor(){
    return this->valor;
}

/************** NumeroSala ***************/
// Metodos de NumeroSala
void NumeroSala::validarValor(string str){
    if(std::stoi(str) < 1 || std::stoi(str) > 10){
        throw std::invalid_argument("NumeroSala: Formato inválido");
    }
}
const string NumeroSala::classname = "NumeroSala";
void NumeroSala::setValor(string str){// throw(invalid_argument){
    validarValor(str);
    this->valor = str;
}
string NumeroSala::getValor(){
    return this->valor;
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
