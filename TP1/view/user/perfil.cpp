#include "perfil.hpp"
#include "../../controller/ticket.hpp"
#include "../../controller/event.hpp"
#include "../../controller/presentation.hpp"
void PerfilView::printTitulo(){
    printw("\t\t\t%s %s\n", "Bem vindo", this->current_user.getCpf().getValor().c_str());
    refresh();
}


int PerfilView::processarOpcao(int ch){
    //! Deve-se criar Objetos de controller
    TicketController ticketCrt;
    UserController usrCrt;
    EventController evntCrt;
    PresentationController presCrt;
    switch (ch)
    {
    case '0':
      return 1;
      break;
    case '1':
      evntCrt.GET_create();
      this->reinicia();
      break;
    case '2':
      ticketCrt.GET_create();
      this->reinicia();
      break;
    case '3':
      usrCrt.GET_edit();
      this->reinicia();
      break;
    case '4':
      presCrt.GET_create();
      reinicia();
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
    printw("\t (3) EDITAR CADASTRO \t (4) CRIAR APRESENTACAO \n");

    if(f_msg.length() > 0){
        printw("Mensagem: %s", f_msg.c_str());
        f_msg = "";
    }

    curs_set(0);
    refresh();
}

int PerfilView::contador = 0;
PerfilView* PerfilView::ref =NULL;

PerfilView::PerfilView(User &new_user){
  current_user = new_user;
  f_msg = "";
} 


PerfilView* PerfilView::getInstance(User &new_user){
  if(contador> 0){
        return ref;
    }
    else{
        contador++;
        ref = new PerfilView(new_user);
        return ref;
    }
}

PerfilView* PerfilView::getInstance(){
  if(contador> 0){
        return ref;
    }
    else{
        contador++;
        ref = new PerfilView();
        return ref;
    }
}

PerfilView::PerfilView(){

  f_msg = "";
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