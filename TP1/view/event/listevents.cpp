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
  printw("\nLista de eventos: \n");
  
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
