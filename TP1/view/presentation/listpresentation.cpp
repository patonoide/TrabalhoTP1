#include "listpresentation.hpp"
#include "../Home.hpp"
#include <ctype.h>

void PresentationListView::printTitulo(){
  printw("\t\t\t%s\n", "Lista de todos eventos");
  refresh();
}

int PresentationListView::processarOpcao(int ch){
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

void  PresentationListView::mostrarOpcoes(){

  // Printa as opções
  printw("\t (ESC) VOLTAR\n\t (1) Ver Todos\n");
  printw("\n\t\tLista de eventos: \n");
  printw("|\t Codigo \t|\t Data \t|\t Horario \t|\t Preco \t|\t Numero \t|\t Numero \t|\n");
  printw("\n");
  std::list<Presentation>::iterator it;
  for(it = this->allPress.begin(); it != this->allPress.end(); it++){
    printw("|\t%s\t|\t%s\t|\t%s\t|\t%s\t|\t%s\t|\t%s\t|\n", it->getCodigoApresentacao().getValor().c_str(),
    it->getData().getValor().c_str(), 
    it->getHorario().getValor().c_str(),
    it->getPreco().getValor().c_str(),
    it->getNumeroSala().getValor().c_str(),
    it->getDisponibilidade().getValor().c_str()
    );
  }

  // Move o cursor
  noecho();

  // Mostra as alterações
  keypad(stdscr, TRUE);
  refresh();
}

void PresentationListView::handleInput(){
  int ch;
  int ret;
  while(true){
    ch = getch();
    ret = this->processarOpcao(ch);
    if(ret == 1) return;
  }
}
