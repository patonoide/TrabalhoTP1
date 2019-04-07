#include "testes.hpp"

// Adiciona na lista de todos os erros e aumenta o contador
void Testes::adicionaErro(string descricao){
    this->totalErros+=1;
    this->total+=1;
    this->todosErros.push_back(descricao);
}

bool Testes::stringIsEq(string a, string b, string message){
    if(a == b){
        this->adicionaSucesso();
        return true;
    }
    else{
        this->adicionaErro(message);
        return false;
    }
}
bool Testes::stringIsNotEq(string a, string b, string message){
    if(a != b){
        this->adicionaSucesso();
        return true;
    }
    else{
        this->adicionaErro(message);
        return false;
    }
}

// Passa por todos os elementos da lista e desaloca-os
// Após mostrar mensagem no terminal
void Testes::logAllErros(){
    if(this->totalErros == 0){
        std::cout << "\nTudo OK\n";
    }
    else{
        std::cout << "\nContagem total de erros foi de: " << this->totalErros <<"\n";
        std::cout << "[Log dos Erros]:\n";
        while( !this->todosErros.empty() ){
            std::cout<<"-> " << this->todosErros.front() << "\n";
            this->todosErros.pop_front();
        }
        this->totalErros = 0;
    }

}

void Testes::adicionaSucesso(){
    this->total+=1;
}

int Testes::totalTestes(){
    return this->total;
}