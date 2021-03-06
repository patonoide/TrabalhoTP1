#include "Home.hpp"
#include "../controller/user.hpp"
#include "../controller/event.hpp"
#include "../controller/presentation.hpp"

void HomeView::printTitulo(){
    printw("\t\t\t%s\n", "Sistema");
    refresh();
}


void HomeView::processarOpcao(int ch){
    //! Deve-se criar Objetos de controller
    UserController usrControll;
    EventController evntContoll;
    PresentationController presControll;
    switch (ch)
    {
    case this->SAIR:
        endwin();
        std::cout << "Até a proxima\n";
        std::exit(0);
        break;
    case this->LOGAR:
        usrControll.GET_login();
        this->reinicia();
        break;
    case '2':
        usrControll.GET_signup();
        this->reinicia();
        break;
    case '3':
        evntContoll.GET_index();
        this->reinicia();
        break;
    case '4':
        evntContoll.GET_search();
        this->reinicia();
        break;
    case '5':
        presControll.GET_index();
        this->reinicia();
        break;
    default:
        break;
    }
}

void HomeView::mostrarOpcoes(){
    noecho();
    printw("\t (0) SAIR \n");
    printw("\t (1) LOGAR \t\t (2) CADASTRAR \n");
    printw("\t (3) LISTAR EVENTOS\t (4) PROCURAR EVENTO\n");
    printw("\t (5) LISTAR APRESENTACOES\n");

    if(f_msg.length() > 0){
        printw("Mensagem: %s", f_msg.c_str());
        f_msg = "";
    }
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

int HomeView::contador = 0;
HomeView* HomeView::ref = NULL;

HomeView::HomeView(){
    f_msg = "";
    contador = 0;
}

HomeView* HomeView::HomeViewCreate(){
    if(contador> 0){
        return ref;
    }
    else{
        contador++;
        ref = new HomeView();
        return ref;
    }
}