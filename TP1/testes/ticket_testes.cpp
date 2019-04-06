#include "testes.hpp"
#include<iostream>      // Notificações no console


void CodigoApresentacao_SetComValorErrado(){ // throw(invalid_argument);

    CodigoApresentacao Testando;

    // Testando se o metodo retorna erro corretamente
    try{
        Testando.setCodigo("codigo invalido");
        //
        std::cout << "x";
    }
    catch(std::invalid_argument){
        std::cout << ".";
    }

    string retorno = Testando.getCodigo();
    // Testando se metodo fez o set invalido
    if(retorno == "codigo invalido"){
        std::cout << "x";
    }
    else{
        std::cout << ".";
    }

}



void Testes::RodarTestes_Ticket(){

    CodigoApresentacao_SetComValorErrado();
    


    std::cout << "\nFim dos testes de Ingresso\n";
}