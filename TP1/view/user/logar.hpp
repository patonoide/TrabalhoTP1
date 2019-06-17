#ifndef VIEWS_USER_HPP
#define VIEWS_USER_HPP

#include "../Application.hpp"


class LogarView : public ApplicationView{
    private:
    void processarOpcao(int); /// Processa uma opção pega pelo getch() 
    void mostrarOpcoes();     /// Printa as opções dessa tela  

    std::string username;
    std::string password;
    
    const int USERNAME = 1;
    const int PASSWORD = 2;
    int editing;


    public:
    void printTitulo();
    void handleInput();
};



#endif