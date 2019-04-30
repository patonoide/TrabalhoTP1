#include "creditcard_DOM.hpp"
#include <iostream>

/************** DATA VALIDADE ***************/
/**
 * @param toValidate string a ser validada
 * 
 * Aborta com erro std::invalid_params caso string esteja fora do padrão descrito:
 * "Formato XX/YY onde XX é número de 01 a 12 e YY é número de 00 a 99."
 */
void DataValidade::validarValor(string toValidate){

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
    if(std::stoi(toValidate.substr(0,2)) > 12 ){
        throw std::invalid_argument("Formato de data invalido");
    }
    // Erro caso do mes ser 00
    if(std::stoi(toValidate.substr(0,2)) == 0 ){
        throw std::invalid_argument("Formato de data invalido");
    }
}

/**
 * @param data string a ser efetivada
 */
void DataValidade::setValor(string data){// throw(invalid_argument){
    this->validarValor(data);
    this->mes = data.substr(0,2);
    this->ano = data.substr(3,2);
    this->valor = data;
    return;
}

const string DataValidade::classname = "Data de Validade";

string DataValidade::getValor(){
    return this->valor;
}

string DataValidade::getAno(){
    return this->ano;
}

string DataValidade::getMes(){
    return this->mes;
}

/************** CODIGO SEGURANCA ***************/
const string CodigoSeguranca::classname = "Codigo de Segurança";


/************** NUMERO CARTAO ***************/
const string NumeroCartao::classname = "Numero de cartao";

void NumeroCartao::validarValor(string aValidar){
    int nSum       = 0;
    int nDigits    = aValidar.length();
    int nParity    = (nDigits-1) % 2;
    char cDigit[2] = "\0";
    for (int i = nDigits; i > 0 ; i--)
    {
        cDigit[0]  = aValidar[i-1];
        int nDigit = atoi(cDigit);

        if (nParity == i % 2)
            nDigit = nDigit * 2;

        nSum += nDigit/10;
        nSum += nDigit%10;
    }
    if(!(0 == nSum % 10)){
        throw std::invalid_argument("hahah");
    }
}

void NumeroCartao::setValor(string toSet){// throw(invalid_argument){
    validarValor(toSet);
    this->valor = toSet;
}
string NumeroCartao::getValor(){
    return this->valor;
}