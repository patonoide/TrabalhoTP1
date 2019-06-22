#include "Home.hpp"
#include "./user/logar.hpp"
#include "./user/cadastrar.hpp"
#include "./event/listevents.hpp"

void HomeView::printTitulo(){
    printw("\t\t\t%s\n", "Sistema");
    refresh();
}


void HomeView::processarOpcao(int ch){
    //! Deve-se criar Objetos de controller
    LogarView userview;
    CadastrarView cadastro;
    EventListView list;
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
    case '3':
        this->redirectTo(list);
        this->render();
        break;
    default:
        break;
    }
}

void HomeView::mostrarOpcoes(){
    noecho();
    printw("\t (0) SAIR \n");
    printw("\t (1) LOGAR \t\t (2) CADASTRAR \n\t (3) LISTAR EVENTOS");

    curs_set(0);
    refresh();
}

void HomeView::handleInput(){
    int ch;
    while(true){
        ch = getch();
        this->processarOpcao(ch);
    }
}