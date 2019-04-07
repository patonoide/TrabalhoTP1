#include "TU_DOM.hpp"   //Header com testes
#include<iostream>      // Notificações no console

int main(int argc, char const *argv[]){

    //Testes De Unidade dos dominios
    TUCodigoIngresso::runTestes();
    TUCodigoIngresso::runTestes();
    TUCodigoSeguranca::runTestes();
    TUDataValidade::runTestes();
    TUNumeroCartao::runTestes();
    TUCodigoApresentacao::runTestes();


    std::cout << "Fim dos testes\n";
    return 0;
}
