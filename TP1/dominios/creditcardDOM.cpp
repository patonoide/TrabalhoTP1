#include "creditcardDOM.hpp"

// Metodos de DataValidade
void DataValidade::setData(string) throw(invalid_argument){
    return;
}
string DataValidade::getData(){
    return "deu ruim";
}

//Metodos de codigo de segurança

void CodigoSeguranca::setCodigo(string) throw(invalid_argument){

}
string CodigoSeguranca::getCodigo(){
    return "deu ruim";
}

//Metodos de numero do cartão

void NumeroCartao::setNumero(int) throw(invalid_argument){
    return;
}
int NumeroCartao::getNumero(){
    return 100;
}