#include "editar.hpp"
#include "../Home.hpp"
#include <ctype.h>

void UserEditView::printTitulo(){
  printw("\t\t\t%s\n", "Editar Usuario");
  refresh();
}

void UserEditView::setAttrs(){
  senha = arr[0];
}

int UserEditView::processarOpcao(int ch){
  switch (ch)
  { 
    case KEY_DOWN:
      if(editing == 0){
        editing +=1;
        cursorY +=1;
        cursorX = 21;

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
      if(editing > 0)break;
      echochar(ch);
      arr[editing].push_back(ch);
  }

  return 0;
}

void  UserEditView::renderCreateOptions(){

  // Procura
  printw("  ### Dados de edição ### \n");
  printw(" Senha: \n");
  printw(" CONFIRMAR [ENTER]: ");

}

void  UserEditView::mostrarOpcoes(){

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

void UserEditView::handleInput(){
  int ch;
  int ret;
  while(true){
    ch = getch();
    ret = this->processarOpcao(ch);
    if(ret == 1) return;
  }
}

