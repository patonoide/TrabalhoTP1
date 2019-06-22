#ifndef VIEWS_USER_LOGAR_HPP
#define VIEWS_USER_LOGAR_HPP

#include "../Application.hpp"


class LogarView : public ApplicationView{
    private:
    int processarOpcao(int); /// Processa uma opção pega pelo getch() 
    void mostrarOpcoes();     /// Printa as opções dessa tela  

    std::string username;
    std::string password;
    
    const int USERNAME = 1;
    const int PASSWORD = 2;
    const int Return = 1;
    const int Ok = 0;
    int editing;

    public:
    void printTitulo();
    void handleInput();
};



#endif