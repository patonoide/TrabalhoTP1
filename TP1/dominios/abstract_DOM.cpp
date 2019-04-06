#include "abstract_DOM.hpp"
#include <iostream>

int Abstracts::Codigo::MaxTam(){
    return this->TAMANHO;
}

void Abstracts::Codigo::validarCodigo(string aValidar){

    int tamanhoInput = (int)aValidar.length();

    if( tamanhoInput != this->MaxTam()){
        throw std::invalid_argument("Tamanho inválido");
    }

    for(int it=0; it<tamanhoInput; it++){
        if(!std::isdigit(aValidar[it])){
            throw std::invalid_argument("Contém caracter");
        }
    }

    return ;
}

void Abstracts::Codigo::setCodigo(string codigo){// throw(invalid_argument){
    this->validarCodigo(codigo);
    this->codigo = codigo;
}

string Abstracts::Codigo::getCodigo(){
    return this->codigo;
}
