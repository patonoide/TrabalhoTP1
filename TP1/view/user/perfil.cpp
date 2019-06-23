#include "perfil.hpp"
#include "../../controller/ticket.hpp"
void PerfilView::printTitulo(){
    printw("\t\t\t%s %s\n", "Bem vindo", this->current_user.getCpf().getValor().c_str());
    refresh();
}


int PerfilView::processarOpcao(int ch){
    //! Deve-se criar Objetos de controller
    TicketController ticketCrt;
    switch (ch)
    {
    case '0':
      return 1;
      break;
    case '1':
      break;
    case '2':
      ticketCrt.GET_create();
      render();
      break;
    case '3':
      break;
    case '4':
      break;
    case '5':
      break;
    default:
        break;
    }
    return 0;
}

void PerfilView::mostrarOpcoes(){
    noecho();
    printw("\t (0) DESLOGAR \n");
    printw("\t (1) CADASTRAR EVENTO \t (2) COMPRAR TICKET \n");
    printw("\t (3) LISTAR EVENTOS\t (4) PROCURAR EVENTO\n");
    printw("\t (5) EDITAR CADASTRO");
    curs_set(0);
    refresh();
}

void PerfilView::handleInput(){
    int ch;
    int retval;
    while(true){
        ch = getch();
        retval = this->processarOpcao(ch);
        if( retval ) return;
    }
}