#include "listevents.hpp"
#include "../Home.hpp"
#include <ctype.h>

void EventListView::printTitulo(){
  printw("\t\t\t%s\n", "Lista de todos eventos");
  refresh();
}

int EventListView::processarOpcao(int ch){
  switch (ch)
  { 
    case KEY_DOWN:
      break;
    case KEY_UP:
      break;
    case 27: // Esc key
      return 1;
      break;
    case KEY_ENTER:
      //! TODO: Confirmar o usuário


      break;
  }

  return 0;
}

void  EventListView::mostrarOpcoes(){

  // Printa as opções
  printw("\t (ESC) VOLTAR\n\t (1) Ver Todos\n");
  printw("\n\t\tLista de eventos: \n");
  printw("|\tFaixa\t|\tCidade\t|\tClasse\t|\tEstado\t|\tNome\t|\tCodigo\t|\n");
  printw("\n");
  std::list<Event>::iterator it;
  for(it = this->todosEventos.begin(); it != this->todosEventos.end(); it++){
    printw("|\t%s\t|\t%s\t|\t%s\t|\t%s\t|\t%s\t|\t%s\t|\n", it->getFaixa().getValor().c_str(),
    it->getCidade().getValor().c_str(), 
    it->getClasse().getValor().c_str(),
    it->getEstado().getValor().c_str(),
    it->getName().getValor().c_str(),
    it->getCodigoEvento().getValor().c_str()
    );
  }

  // Move o cursor
  noecho();

  // Mostra as alterações
  keypad(stdscr, TRUE);
  refresh();
}

void EventListView::handleInput(){
  int ch;
  int ret;
  while(true){
    ch = getch();
    ret = this->processarOpcao(ch);
    if(ret == 1) return;
  }
}
