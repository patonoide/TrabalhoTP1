#ifndef VIEWS_HOME_HPP
#define VIEWS_HOME_HPP

#include "Application.hpp"
#include "iostream"



class HomeView : public ApplicationView{
    private:
    void processarOpcao(int); /// Processa uma opção pega pelo getch() 
    void mostrarOpcoes();     /// Printa as opções dessa tela  

    HomeView* ref;
    int contador = 0;
    public:
    
    HomeView();

    HomeView* HomeViewCreate();
    void printTitulo();
    void handleInput();
};



#endif