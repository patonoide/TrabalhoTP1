#ifndef APPLICATIONS_HOME_HPP
#define APPLICATIONS_HOME_HPP
#include "ncurses.h"
#include <iostream>

class ApplicationView{
    private:

    public:
    static const int SAIR = '0';
    static const int LOGAR = '1';
    static const int VOLTAR = '2';

    virtual void mostrarOpcoes() = 0;
    /**
     * @brief Metodo para processar opção escolhida pelo usuario, e realizar
     *  ações baseadas nela.
     */
    virtual void handleInput() = 0;
    virtual void printTitulo() = 0;


    void render();
    void redirectTo(ApplicationView &newScreen);

};
#endif