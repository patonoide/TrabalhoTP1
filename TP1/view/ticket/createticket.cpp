#include "createticket.hpp"
#include "../Home.hpp"
#include <ctype.h>

void TicketCreateView::printTitulo(){
  printw("\t\t\t%s\n", "Criar Ticketos");
  refresh();
}

void TicketCreateView::setAttrs(){
  codigo = arr[0];
  quantidade = arr[1];
}

int TicketCreateView::processarOpcao(int ch){
  switch (ch)
  { 
    case KEY_DOWN:
      if(editing == 1){
        editing +=1;
        cursorY +=1;
        cursorX = 21;

        move(cursorY, cursorX);
      }
      if(editing < 1){
        editing += 1;
        cursorY += 1;
        cursorX = 14 + arr[editing].length();
        
        move(cursorY, cursorX);
      }
      break;
    case KEY_UP:
      if(editing > 0){
        editing -= 1;
        cursorY -= 1;
        cursorX = 14 + arr[editing].length();
        
        move(cursorY, cursorX);
      }
      break;
    case 27: // Esc key
      return 1;
      break;
    case KEY_ENTER:
      //! TODO: Confirmar o usuário
      break;
    default: 
      if(!isalnum(ch))break;
      if(editing == 7)break;
      echochar(ch);
      arr[editing].push_back(ch);
  }

  return 0;
}

void  TicketCreateView::renderCreateOptions(){

  // Procura
  printw("  ### Dados de criação ### \n");
  printw(" Codigo: \n");
  printw(" Quantidade: \n");
  printw(" CONFIRMAR [ENTER]: ");

}

void  TicketCreateView::mostrarOpcoes(){

  // Printa as opções
  printw("\t\t\t (ESC) VOLTAR\n");

  renderCreateOptions();

  curs_set(1);
  cursorY = 3;
  cursorX = 21;
  keypad(stdscr, TRUE);
  this->editing = 0;
  // Move o cursor
  move(cursorY, cursorX);

  // Mostra as alterações
  noecho();
  keypad(stdscr, TRUE);
  refresh();
}

void TicketCreateView::handleInput(){
  int ch;
  int ret;
  while(true){
    ch = getch();
    ret = this->processarOpcao(ch);
    if(ret == 1) return;
  }
}

