#include "event_DOM.hpp"


//metodos codigo evento
const string CodigoEvento::classname = "CodigoEvento";




//metodos name
const string Name::classname = "Name";
string Name::getValor(){
    return this->name;

}
void Name::validarValor(string name){

    if(name.length() > 20){
        throw std::invalid_argument("Muito Grande");
    }

    bool hasLetter = false;
    bool hasDigit = false;
    for (int i = 0; i < name.size(); i++) {

        if (isalpha(name.at(i))) { hasLetter = true; }

        if(name.at(i)== '.'){

                throw std::invalid_argument("Não tem letra após ponto");

        }

        if(name.at(i)== ' '){
            if(name.at(i+1)== ' '){
                throw std::invalid_argument("Tem dois espaços em branco");
            }
        }
    }
    if(hasLetter == false){
        throw std::invalid_argument("Não tem letra");
    }


}

void Name::setValor(string name){
    try{
        validarValor(name);
        this->name = name;
    }catch(std::invalid_argument){
        throw std::invalid_argument("Nenhuma das opções possíveis");
    }
}




//metodos Cidade
const string Cidade::classname = "Cidade";
string Cidade::getValor(){
    return this->cidade;
}

void Cidade::validarValor(string cidade){

    if(cidade.length() > 15){
        throw std::invalid_argument("Muito Grande");
    }

    bool hasLetter = false;
    bool hasDigit = false;
    for (int i = 0; i < cidade.size(); i++) {
        if (isdigit(cidade.at(i))) { hasDigit = true; }
        if (isalpha(cidade.at(i))) { hasLetter = true; }

        if(cidade.at(i)== '.'){
            if(cidade.at(i+1)== '.' || cidade.at(i+1)== ' '){
                throw std::invalid_argument("Não tem letra após ponto");
            }
        }

        if(cidade.at(i)== ' '){
            if(cidade.at(i+1)== ' '){
                throw std::invalid_argument("Tem dois espaços em branco");
            }
        }
    }
    if(hasLetter == false){
        throw std::invalid_argument("Não tem letra");
    }
    if(hasDigit == true){
        throw std::invalid_argument("Tem número");
    }



    // if (s.find('[') != std::string::npos){
    //
    // }else{
    //
    // }


}

void Cidade::setValor(string cidade){
    try{
        validarValor(cidade);
        this->cidade = cidade;
    }catch(std::invalid_argument){
        throw std::invalid_argument("Nenhuma das opções possíveis");
    }
}

//metodos Estado
const string Estado::classname = "Estado";
string Estado::getValor(){
    return this->estado;
}

void Estado::validarValor(string estado){
    if(estado.compare("AC")!=0)
    if(estado.compare("AL")!=0)
    if(estado.compare("AP")!=0)
    if(estado.compare("AM")!=0)
    if(estado.compare("BA")!=0)
    if(estado.compare("CE")!=0)
    if(estado.compare("DF")!=0)
    if(estado.compare("ES")!=0)
    if(estado.compare("GO")!=0)
    if(estado.compare("MA")!=0)
    if(estado.compare("MT")!=0)
    if(estado.compare("MS")!=0)
    if(estado.compare("PA")!=0)
    if(estado.compare("PB")!=0)
    if(estado.compare("PR")!=0)
    if(estado.compare("PE")!=0)
    if(estado.compare("PI")!=0)
    if(estado.compare("RJ")!=0)
    if(estado.compare("RN")!=0)
    if(estado.compare("RS")!=0)
    if(estado.compare("RO")!=0)
    if(estado.compare("RR")!=0)
    if(estado.compare("SC")!=0)
    if(estado.compare("SP")!=0)
    if(estado.compare("SE")!=0)
    if(estado.compare("TO")!=0)
    throw std::invalid_argument("Nenhuma das opções possíveis");
}
void Estado::setValor(string estado){
    try{
        validarValor(estado);
        this->estado = estado;
    }catch(std::invalid_argument){
        throw std::invalid_argument("Nenhuma das opções possíveis");
    }
}

//metodos classe
const string Classe::classname = "Classe";
string Classe::getValor(){
    return this->classe;
}
void Classe::validarValor(string classe){

    if(classe.compare("0")!=0)
    if(classe.compare("1")!=0)
    if(classe.compare("2")!=0)
    if(classe.compare("3")!=0)
    if(classe.compare("4")!=0)
    throw std::invalid_argument("Nenhuma das opções possíveis");



}

void Classe::setValor(string classe){
    try{
        validarValor(classe);
        this->classe = classe;
    }catch(std::invalid_argument){
        throw std::invalid_argument("Nenhuma das opções possíveis");
    }
}



const string Faixa::classname = "Faixa";
//metodo faixa
void Faixa::setValor(string faixa){
    try{
        validarValor(faixa);
        this->faixa = faixa;
    }catch(std::invalid_argument){
        throw std::invalid_argument("Nenhuma das opções possíveis");
    }
}
string Faixa::getValor(){
    return this->faixa;
}


void Faixa::validarValor(string faixa){
    if(faixa.compare("L")!=0)
    if(faixa.compare("10")!=0)
    if(faixa.compare("12")!=0)
    if(faixa.compare("14")!=0)
    if(faixa.compare("16")!=0)
    if(faixa.compare("18")!=0)
    throw std::invalid_argument("Nenhuma das opções possíveis");

}
