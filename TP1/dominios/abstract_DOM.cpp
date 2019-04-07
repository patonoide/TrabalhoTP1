#include "abstract_DOM.hpp"
#include <iostream>

int Abstracts::Codigo::MaxTam(){
    return this->TAMANHO;
}

/**
 * @param aValidar string que será conferida
 * 
 * Aborta com erro std::invalid param caso aValidar esteja fora do padrão:
 * 
 * "Formato XXX onde X é dígito (0 – 9)".
 * 
 * Sendo a quatidade de X's determinada pelo atributo TAMANHO da instancia.
 */
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

/**
 * @param codigo String a ser colocada efetivada 
 */
void Abstracts::Codigo::setCodigo(string codigo){// throw(invalid_argument){
    this->validarCodigo(codigo);
    this->codigo = codigo;
}

string Abstracts::Codigo::getCodigo(){
    return this->codigo;
}
