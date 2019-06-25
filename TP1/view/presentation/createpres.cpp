#include "createpres.hpp"
#include "../Home.hpp"
#include "../../controller/presentation.hpp"
#include "../../controller/event.hpp"
#include <ctype.h>

void PresentationCreateView::printTitulo(){
  printw("\t\t\t%s\n", "Criar Presentationos");
  refresh();
}

void PresentationCreateView::confirmar(){ 
  PresentationController a;
  a.POST_create(arr);
}

int PresentationCreateView::processarOpcao(int ch){
  switch (ch)
  { 
    case KEY_DOWN:
      if(editing == 6){
        editing +=1;
        cursorY +=1;
        cursorX = 21;

        move(cursorY, cursorX);
      }
      if(editing < 6){
        editing += 1;
        cursorY += 1;
        cursorX = 21 + arr[editing].length();
        
        move(cursorY, cursorX);
      }

      break;
    case KEY_UP:
      if(editing > 0){
        editing -= 1;
        cursorY -= 1;
        cursorX = 21 + arr[editing].length();
        
        move(cursorY, cursorX);
      }
      break;
    case 27: // Esc key
      return 1;
      break;
    case 10:
      //! TODO: Confirmar o usuário
      if (editing == 7){
        confirmar();
        return 1;
      }
      break;
    default: 
      if(!isalnum(ch))break;
      if(editing > 6)break;
      echochar(ch);
      arr[editing].push_back(ch);
  }

  return 0;
}

void  PresentationCreateView::renderCreateOptions(){

  // Procura
  printw("  ### Dados de criação ### \n");
  printw(" Codigo Apresentacao : \n");
  printw(" Data: \n");
  printw(" Horario: \n");
  printw(" Preco: \n");
  printw(" Numero Sala: \n");
  printw(" Disponibilidade: \n");
  printw(" Codigo evento: \n");
  printw(" CONFIRMAR [ENTER]: ");

}

void  PresentationCreateView::mostrarOpcoes(){

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

void PresentationCreateView::handleInput(){
  int ch;
  int ret;
  while(true){
    ch = getch();
    ret = this->processarOpcao(ch);
    if(ret == 1) return;
  }
}

