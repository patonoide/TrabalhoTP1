#include "Home.hpp"
#include "../controller/user.hpp"
#include "../controller/event.hpp"

void HomeView::printTitulo(){
    printw("\t\t\t%s\n", "Sistema");
    refresh();
}


void HomeView::processarOpcao(int ch){
    //! Deve-se criar Objetos de controller
    UserController usrControll;
    EventController evntContoll;

    switch (ch)
    {
    case this->SAIR:
        endwin();
        std::cout << "Até a proxima\n";
        std::exit(0);
        break;
    case this->LOGAR:
        usrControll.GET_login();
        this->render();
        break;
    case '2':
        usrControll.GET_signup();
        this->render();
        break;
    case '3':
        evntContoll.GET_index();
        this->render();
        break;
    case '4':
        evntContoll.GET_search();
        this->render();
    default:
        break;
    }
}

void HomeView::mostrarOpcoes(){
    noecho();
    printw("\t (0) SAIR \n");
    printw("\t (1) LOGAR \t\t (2) CADASTRAR \n");
    printw("\t (3) LISTAR EVENTOS\t (4) PROCURAR EVENTO");

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