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

    string::iterator it;
    string::iterator id;

    int counter;

    if(senha.length() < 6){
        throw std::invalid_argument("Senha menor que 6 caracteres");
    }

    for (it=senha.begin(); it!=senha.end(); it++){
        for (id=senha.begin(); id!=senha.end(); id++){
            if(id == it){
                counter++;
            }
            if(counter >= 2){
                throw std::invalid_argument("Letras repetiram");
            }
            counter = 0;
        }
    }


    int uppercount = 0;
    int lowercount = 0;
    int numbercount = 0;
    int citerator;
    char ch;

    for (citerator = 0; citerator != senha.length() ; citerator++){
        if(isupper(ch = senha[citerator]) == true){
            uppercount++;
        }
        if(islower(ch = senha[citerator]) == true){
            uppercount++;
        }
        if(isdigit(ch = senha[citerator]) == true){
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
