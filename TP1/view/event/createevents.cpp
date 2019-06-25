#include "createevents.hpp"
#include "../Home.hpp"
#include "../../controller/event.hpp"
#include <ctype.h>

void EventCreateView::printTitulo(){
  printw("\t\t\t%s\n", "Criar eventos");
  refresh();
}

void EventCreateView::setAttrs(){
  faixa = arr[0];
  classe = arr[1];
  estado = arr[2];
  cidade = arr[3];
  nome = arr[4];
  codigo = arr[5];
}

int EventCreateView::processarOpcao(int ch){
  switch (ch)
  { 
    case KEY_DOWN:
      if(editing == 5){
        editing +=1;
        cursorY +=1;
        cursorX = 21;

        move(cursorY, cursorX);
      }
      if(editing < 5){
        editing += 1;
        cursorY += 1;
        cursorX = 11 + arr[editing].length();
        
        move(cursorY, cursorX);
      }

      break;
    case KEY_UP:
      if(editing > 0){
        editing -= 1;
        cursorY -= 1;
        cursorX = 11 + arr[editing].length();
        
        move(cursorY, cursorX);
      }
      break;
    case 27: // Esc key
      return 1;
      break;
    case 10:
      //! TODO: Confirmar o usuário
      if (editing == 6){
        EventController a;
        a.POST_create(arr);
        return 1;
      }
      break;
    default: 
      if(!isalnum(ch))break;
      if(editing > 5)break;
      echochar(ch);
      arr[editing].push_back(ch);
  }

  return 0;
}

void  EventCreateView::renderCreateOptions(){

  // Procura
  printw("  ### Dados de criação ### \n");
  printw(" Faixa : \n");
  printw(" Classe: \n");
  printw(" Estado: \n");
  printw(" Cidade: \n");
  printw(" Nome: \n");
  printw(" Codigo: \n");
  printw(" CONFIRMAR [ENTER]: ");

}

void  EventCreateView::mostrarOpcoes(){

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

void EventCreateView::handleInput(){
  int ch;
  int ret;
  while(true){
    ch = getch();
    ret = this->processarOpcao(ch);
    if(ret == 1) return;
  }
}

