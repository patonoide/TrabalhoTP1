#ifndef VIEWS_HOME_HPP
#define VIEWS_HOME_HPP

#include "Application.hpp"
#include "iostream"



class HomeView : public ApplicationView{
    private:
    void processarOpcao(int); /// Processa uma opção pega pelo getch() 
    void mostrarOpcoes();     /// Printa as opções dessa tela  
    const char* screenTitle ="Bem vindo ao Sistema.";
    
    public:
    void printTitulo();
    void handleInput();
};



#endif