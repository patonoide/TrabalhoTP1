#ifndef VIEWS_USER_CADASTRAR_HPP
#define VIEWS_USER_CADASTRAR_HPP

#include "../Application.hpp"


class CadastrarView : public ApplicationView{
    private:
    int processarOpcao(int); /// Processa uma opção pega pelo getch() 
    void mostrarOpcoes();     /// Printa as opções dessa tela  

    std::string password;
    std::string cpf; 
    std::string dataval;
    std::string codcart;
    std::string numcart;
    const int CPF = 1;
    const int PASSWORD = 2;
    const int DATA = 3;
    const int CODIGO = 4;
    const int NUM = 5;
    const int CONFIRMAR=6;

    const int Return = 7;
    const int AllOk = 0;
    int editing;

    void ConfirmarDados();

    public:
    void printTitulo();
    void handleInput();

};



#endif