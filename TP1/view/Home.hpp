#ifndef VIEWS_HOME_HPP
#define VIEWS_HOME_HPP

#include "Application.hpp"
#include "iostream"



class HomeView : public ApplicationView{
    private:
    void processarOpcao(int); /// Processa uma opção pega pelo getch() 
    void mostrarOpcoes();     /// Printa as opções dessa tela  

    
    public:

    static int contador;
    static HomeView* ref;
    std::string f_msg;
    
    HomeView();
    static HomeView* HomeViewCreate();
    void printTitulo();
    void handleInput();
};



#endif