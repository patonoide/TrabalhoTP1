#include "user_DOM.hpp"


const string Cpf::classname = "CPF";
//métodos cpf
string Cpf::getValor(){
    return this->cpf;
}
void Cpf::setValor(string cpf){

        validarValor(cpf);
        this->cpf = cpf;

}
void Cpf::validarValor(string cpf){

    int cpfarray[11];
    char ponto = '.';
    char traco = '-';
    int it;

    cpf.erase(std::remove(cpf.begin(), cpf.end(), ponto), cpf.end());
    cpf.erase(std::remove(cpf.begin(), cpf.end(), traco), cpf.end());
    if(cpf.length() != 11){
        throw std::invalid_argument("Mais ou menos que 11 digitos");
    }

    if(std::all_of(cpf.begin(), cpf.end(), isdigit) == false){
        throw std::invalid_argument("Não tem só numeros nessa parada");
    }
    //colocando cpf no array
    for (it=0  ;it!=(int)cpf.length(); it++){

        cpfarray[it] = (cpf.at(it)) - '0';


    }

    int counter =0 ; //contador para numero de vezes
    int numeroacomparar = 0 ;
    int it2;
    //checa se os número sao iguais ie: 00.000.000-00
    for (it2=0  ;it2!=10; it2++){
        for (it=0  ;it!=10; it++){
            if(cpfarray[it] == numeroacomparar){
                counter++;
            }

            if(counter == 10){
                throw std::invalid_argument("Cpf inválido");
            }

        }
        numeroacomparar ++;
        if(it == 10){
            counter = 0;
        }
    }

    float temp = 0.0;
    int somador=0; //acumulador da soma
    int multi = 10;// numero a multiplicar
    //checando primeiro digito
    for (it=0  ;it!=10; it++){


        if((float)((somador*10) % 11) == (float)10 &&  it == 9){

            temp = 0.0;
            if(temp != (float)cpfarray[9]  && it == 9){

                throw std::invalid_argument("Cpf inválido");
            }

        }else{
            if(it == 9){

                temp =  (float)((somador*10) % 11);
                if(temp != (float)cpfarray[9] && it == 9){


                    throw std::invalid_argument("Cpf inválido");
                }
            }
        }
        if(it < 9){
            somador  = cpfarray[it] * multi + somador;
            multi--;

        }

    }


    multi = 11;

    //checando segundo digito
    for (it=0  ;it!=11; it++){


        if((float)((somador*10) % 11) == (float)10 && it == 11){
            temp = 0.0;
            if(temp != (float)cpfarray[10]  && it == 11){


                throw std::invalid_argument("Cpf inválido");
            }

        }else{
            if(it == 11){

                temp =  (float)((somador*10) % 11);

                if(temp != (float)cpfarray[10] && it == 11){
                    std::cout << temp;
                    std::cout << cpf;

                    throw std::invalid_argument("Cpf inválido");
                }
            }

        }
        if(it <10){
            somador  = cpfarray[it] * multi + somador;
            multi--;

        }


    }



}


const string Senha::classname = "Senha";

//métodos senha
string Senha::getValor(){
    return this->senha;
}
void Senha::setValor(string senha){

        validarValor(senha);
        this->senha = senha;






}

void Senha::validarValor(string senha){

    int it;
    int id;

    int counter=0;

    if(senha.length() != 6){
        throw std::invalid_argument("Senha menor que 6 caracteres");
    }


    for (it=0  ;it!=(int)senha.length(); it++){


        for (id=0; id!=(int)senha.length(); id++){


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


    for (citerator = 0; citerator != (int)senha.length() ; citerator++){

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
