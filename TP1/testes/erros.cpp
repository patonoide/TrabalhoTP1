#include "testes.hpp"

// Adiciona na lista de todos os erros e aumenta o contador
void Testes::Erros::adicionaErro(string descricao){
    this->total+=1;
    this->todosErros.push_back(descricao);
}

// Passa por todos os elementos da lista e desaloca-os
// Após mostrar mensagem no terminal
void Testes::Erros::logAllErros(){
    if(this->total == 0){
        std::cout << "\nTudo OK\n";
    }
    else{
        std::cout << "\nContagem total de erros foi de: " << this->total <<"\n";
        std::cout << "[Log dos Erros]:\n";
        while( !this->todosErros.empty() ){
            std::cout<<"-> " << this->todosErros.front() << "\n";
            this->todosErros.pop_front();
        }
        this->total = 0;
    }

}