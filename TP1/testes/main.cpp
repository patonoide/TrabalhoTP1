#include "dominios/TU_DOM.hpp"   //Header com testes
#include<iostream>      // Notificações no console

int main(int argc, char const *argv[]){

    //Testes De Unidade dos dominios
    TUCodigoIngresso a;
    a.runTestes();

    TUCodigoSeguranca b;
    b.runTestes();

    TUDataValidade c;
    c.runTestes();

    TUNumeroCartao d;
    d.runTestes();

    TUCodigoApresentacao e;
    e.runTestes();

    TUFaixa f;
    f.runTestes();

    std::cout << "Fim dos testes\n";
    return 0;
}
