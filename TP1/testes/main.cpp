#include "testes.hpp"   //Header com testes

#include<iostream>      // Notificações no console

int main(int argc, char const *argv[]){

    ExecTest::Testes_Ticket();
    ExecTest::Testes_CreditCard();
    ExecTest::Testes_Presentation();

    std::cout << "Fim dos testes\n";
    return 0;
}
