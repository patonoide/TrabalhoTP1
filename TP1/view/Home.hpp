#ifndef VIEWS_HOME_HPP
#define VIEWS_HOME_HPP

#include "Application.hpp"
#include "iostream"



class HomeView : public ApplicationView{
    private:
    void processarOpcao(int); /// Processa uma opção pega pelo getch() 
    void mostrarOpcoes();     /// Printa as opções dessa tela  
    
    std::string flash;
    public:
    
    HomeView(){}
    HomeView(std::string f_message){
        flash = f_message;
    }
    void printTitulo();
    void handleInput();
};



#endif