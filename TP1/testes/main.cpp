#include "testes.hpp"   //Header com testes

#include<iostream>      // Notificações no console

int main(int argc, char const *argv[]){

    Testes::RodarTestes_Ticket();
    Testes::RodarTestes_CreditCard();

    std::cout << "Fim dos testes\n";
    return 0;
}
