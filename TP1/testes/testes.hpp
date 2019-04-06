#ifndef TEST_TESTES_H
#define TEST_TESTES_H

// Include nos dominios a serem testados
#include "../dominios/ticket_DOM.hpp"
#include "../dominios/presentation_DOM.hpp"
#include "../dominios/creditcard_DOM.hpp"
#include <list>
#include <iostream>

// Criando o namespace para conter todas as declarações de testes
namespace Testes{

    // Classe que cuida de armazenamento e log de erros.
    class Erros{
        private:
            int total;
            std::list<string> todosErros;
        public:
        Erros(){this->total = 0;}               // Inicializando variaveis dps da criação da instancia
        int getTotal(){return this->total;}     // Retorna total de erros
        void adicionaErro(string);              // Salva uma string descrição um erro
        void logAllErros();                     // Mostra todos os erros no terminal
    };

    /********* Arquivos principais de testes *********/

    void RodarTestes_Ticket();

}

#endif