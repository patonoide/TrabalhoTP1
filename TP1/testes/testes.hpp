#ifndef TEST_TESTES_H
#define TEST_TESTES_H

// Include nos dominios a serem testados
#include "../dominios/ticket_DOM.hpp"
#include "../dominios/presentation_DOM.hpp"
#include "../dominios/creditcard_DOM.hpp"
#include <list>
#include <iostream>

// Classe que cuida de armazenamento e log de erros.
class Testes{
    protected:
        int total;
        int totalErros;
        std::list<string> todosErros;
    public:
    Testes(){
        this->total = 0;
        this->totalErros = 0;
    }               // Inicializando variaveis dps da criação da instancia
    int getTotal(){return this->total;}     // Retorna total de erros
    void adicionaErro(string);              // Salva uma string descrição um erro
    void logAllErros();                     // Mostra todos os erros no terminal
    void adicionaSucesso();                 // Adiciona um teste em que houve sucesso
    int totalTestes();                      // Retorna total de testes
};

/********* Arquivos principais de testes *********/
namespace ExecTest
{
    
    void Testes_Ticket();
    void Testes_CreditCard();

} // ExecTest



#endif