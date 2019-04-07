#include "testes.hpp"





/****** Rodando todos os testes dessa entidade ********/
void ExecTest::Testes_Presentation(){
    // Criando instancia que irá armazenar os erros
    Testes ticket_tests;

    // Começando os testes
    std::cout << "\n==> Inicio dos testes de Apresentação\n";

    /***** Chamando funções de testes *****/

    // Mostrando resultado no terminal
    ticket_tests.logAllErros();
    std::cout << "Foram feitos " << ticket_tests.totalTestes() << " testes.";
    std::cout << "\n==>Fim dos testes de Apresentação\n";
}