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
        Erros(){
            this->total = 0;
        }
        int getTotal(){
            return this->total;
        }
        void adicionaErro(string descricao){
            this->total+=1;
            this->todosErros.push_back(descricao);
        }
        void logAllErros(){
            if(this->total == 0){
                std::cout << "Tudo OK\n";
            }
            else{
                std::cout << "\n[Log dos Erros]:\n";
                while( !this->todosErros.empty() ){
                    std::cout<<"-> " << this->todosErros.front() << "\n";
                    this->todosErros.pop_front();
                }
                std::cout << "Contagem total de erros foi de: " << this->total <<"\n";
            }
        }
    };


    void RodarTestes_Ticket();

}

#endif