#include "user_DOM.hpp"



//métodos cpf
string Cpf::getCpf(){
    return this->cpf;
}
void Cpf::setCpf(string cpf){

    this->validarCpf(cpf);
    this->cpf = cpf;
}
void Cpf::validarCpf(string cpf){

}


const string Senha::classname = "Senha";

//métodos senha
string Senha::getValor(){
    return this->senha;
}
void Senha::setValor(string senha){

    try{
        validarValor(senha);
        this->senha = senha;
    }catch(std::invalid_argument){
        throw std::invalid_argument("Nenhuma das opções possíveis");
    }



}

void Senha::validarValor(string senha){

    int it;
    int id;

    int counter=0;

    if(senha.length() != 6){
        throw std::invalid_argument("Senha menor que 6 caracteres");
    }


    for (it=0  ;it!=senha.length(); it++){


        for (id=0; id!=senha.length(); id++){


            if(senha.at(it) == senha.at(id)){
                counter++;
                
            }
            if(counter >= 2){
                throw std::invalid_argument("Caracteres repetiram");
            }
        }
        counter = 0;
    }


    int uppercount = 0;
    int lowercount = 0;
    int numbercount = 0;
    int citerator;


    for (citerator = 0; citerator != senha.length() ; citerator++){

        if(isupper(senha.at(citerator)) != 0){

            uppercount++;
        }
        if(islower(senha.at(citerator)) != 0){
            lowercount++;
        }
        if(isdigit(senha.at(citerator)) != 0){
            numbercount++;
        }
    }
    if(uppercount == 0){
        throw std::invalid_argument("Não tem letras maiusculas");
    }

    if(lowercount == 0){
        throw std::invalid_argument("Não tem letras minusculas");
    }

    if(numbercount == 0){
        throw std::invalid_argument("Não tem números");
    }


}
