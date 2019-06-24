#include "searchevents.hpp"
#include "../Home.hpp"
#include <ctype.h>

void EventSearchView::printTitulo(){
  printw("\t\t\t%s\n", "Procurar eventos");
  refresh();
}

int EventSearchView::processarOpcao(int ch){
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
        cursorX = 19 + arr[editing].length();
        
        move(cursorY, cursorX);
      }

      break;
    case KEY_UP:
      if(editing > 0){
        editing -= 1;
        cursorY -= 1;
        cursorX = 19 + arr[editing].length();
        
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
      if(editing > 1)break;
      echochar(ch);
      arr[editing].push_back(ch);
  }

  return 0;
}

void  EventSearchView::renderSearchOptions(){

  // Procura
  printw("  ### Dados da procura ### \n");
  printw(" Cidade: \n");
  printw(" Estado: \n");
  printw(" CONFIRMAR [ENTER]: ");

}
void  EventSearchView::renderListEvents(){
  printw("\n\n\t\tLista de eventos: \n");
  printw("|\tFaixa\t|\tCidade\t|\tClasse\t|\tEstado\t|\tNome\t|\tCodigo\t|\n");
  printw("\n");
  std::list<Event>::iterator it;
  for(it = this->toShow.begin(); it != this->toShow.end(); it++){
    printw("|\t%s\t|\t%s\t|\t%s\t|\t%s\t|\t%s\t|\t%s\t|\n", it->getFaixa().getValor().c_str(),
    it->getCidade().getValor().c_str(), 
    it->getClasse().getValor().c_str(),
    it->getEstado().getValor().c_str(),
    it->getName().getValor().c_str(),
    it->getCodigoEvento().getValor().c_str()
    );
  }
}
void  EventSearchView::mostrarOpcoes(){

  // Printa as opções
  printw("\t\t\t (ESC) VOLTAR\n");

  renderSearchOptions();
  renderListEvents();

  curs_set(1);
  cursorY = 3;
  cursorX = 19;
  keypad(stdscr, TRUE);
  this->editing = 0;
  // Move o cursor
  move(cursorY, cursorX);

  // Mostra as alterações
  noecho();
  keypad(stdscr, TRUE);
  refresh();
}

void EventSearchView::handleInput(){
  int ch;
  int ret;
  while(true){
    ch = getch();
    ret = this->processarOpcao(ch);
    if(ret == 1) return;
  }
}


void EventSearchView::filterSearch(){
  inicDate = "";
  finshDate = "";
  cidade = "";
  sigla ="";
  estado = "";
  erase();
  mostrarOpcoes();
}