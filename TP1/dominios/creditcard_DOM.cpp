#include "creditcard_DOM.hpp"
#include <iostream>
// Metodos de DataValidade
void DataValidade::validarData(string toValidate){

    // Validando formato
    if(!std::isdigit(toValidate[0]) || !std::isdigit(toValidate[1])){
        throw std::invalid_argument("String fora do Formato XX/XX");
    }
    if(toValidate[2] != '/'){
        throw std::invalid_argument("String fora do Formato XX/XX");
    }
    if(!std::isdigit(toValidate[3]) || !std::isdigit(toValidate[4])){
        throw std::invalid_argument("String fora do Formato XX/XX");
    }

    if(toValidate.length() > 5){
        throw std::invalid_argument("Formato de data incorreto");
    }

    // Se o primeiro caracter da data não for 0 nem 1, o numero será maior ou igual a 20
    // O que caracteriza essa data como fora de formato
    if(toValidate[0] != '0' && toValidate[1] != '1'){
        throw std::invalid_argument("Mês deve ser entre 01 e 12");
    }
    // Erro caso do mes ser maior que 12
    if(toValidate[0] == '1' && (int)toValidate[1] > 2){
        throw std::invalid_argument("Mês deve ser entre 01 e 12");
    }
    // Erro caso do mes ser 00
    if(toValidate[0] == '0' && toValidate[1] == '0'){
        throw std::invalid_argument("Mês deve ser entre 01 e 12");
    }
}
void DataValidade::setData(string data){// throw(invalid_argument){
    this->validarData(data);
    this->mes = data.substr(0,2);
    this->ano = data.substr(3,2);
    this->data = data;
    return;
}
string DataValidade::getData(){
    return this->data;
}
string DataValidade::getAno(){
    return this->ano;
}
string DataValidade::getMes(){
    return this->mes;
}
// Metodos de numero do cartão

void NumeroCartao::setNumero(int){// throw(invalid_argument){
    return;
}
int NumeroCartao::getNumero(){
    return 100;
}