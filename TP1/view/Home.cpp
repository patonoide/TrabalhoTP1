#include "Home.hpp"
#include "./user/logar.hpp"
#include "./user/cadastrar.hpp"

void HomeView::printTitulo(){
    printw("\t\t\t%s\n", "Sistema");
    refresh();
}


void HomeView::processarOpcao(int ch){
    LogarView userview;
    CadastrarView cadastro;
    switch (ch)
    {
    case this->SAIR:
        endwin();
        std::cout << "Até a proxima\n";
        std::exit(0);
        break;
    case this->LOGAR:
        this->redirectTo(userview);
        this->render();
        break;
    case '2':
        this->redirectTo(cadastro);
        this->render();
        break;
    default:
        break;
    }
}

void HomeView::mostrarOpcoes(){
    noecho();
    printw("\t (0) SAIR \n");
    printw("\t (1) LOGAR \t (2) CADASTRAR \n");

    refresh();
}

void HomeView::handleInput(){
    int ch;
    while(true){
        ch = getch();
        this->processarOpcao(ch);
    }
}