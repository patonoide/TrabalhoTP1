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

    TUSenha g;
    g.runTestes();

    TUCpf h;
    h.runTestes();

    TUClasse i;
    i.runTestes();

    TUEstado j;
    j.runTestes();

    TUCidade k;
    k.runTestes();

    TUName l;
    l.runTestes();

    TUCodigoEvento m;
    m.runTestes();


    TUData f;
    f.runTestes();

    TUHorario gi;
    gi.runTestes();
    
    TUPreco hi;
    hi.runTestes();

    TUNumeroSala ii;
    ii.runTestes();

    TUDisponibilidade ji;
    ji.runTestes();
    
    std::cout << "Fim dos testes\n";
    return 0;
}
