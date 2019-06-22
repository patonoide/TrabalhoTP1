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
      switch (editing){
        case 1:
          editing +=1;
          cursorY +=1 ;
          cursorX = 17 + this->finshDate.length() ;

          move(cursorY, cursorX);
          break;
        case 2:
          editing+=1;
          cursorY+=1 ;
          cursorX=11 + this->cidade.length();

          move(cursorY, cursorX);
          break;
        case 3:
          editing+=1;
          cursorY+=1 ;
          cursorX=10 + this->sigla.length();

          move(cursorY, cursorX);
          break;
        case 4:
          editing+=1;
          cursorY+=1 ;
          cursorX= 11  + this->estado.length();

          move(cursorY, cursorX);
          break;
        case 5:
          editing +=1;
          cursorY +=1;
          cursorX = 21;

          move(cursorY, cursorX);
          break;
        case 6:
          break;
      }

      break;
    case KEY_UP:
      switch (editing){
        case 1:
          break;
        case 2:
          editing-=1;
          cursorY-=1 ;
          cursorX = 21 + this->inicDate.length() ;

          move(cursorY, cursorX);
          break;
        case 3:
          editing-=1;
          cursorY-=1 ;
          cursorX= 17 + this->finshDate.length();

          move(cursorY, cursorX);
          break;
        case 4:
          editing-=1;
          cursorY-=1 ;
          cursorX=11 + this->cidade.length();

          move(cursorY, cursorX);
          break;
        case 5:
          editing -=1;
          cursorY -=1 ;
          cursorX= 10 + this->sigla.length();

          move(cursorY, cursorX);
          break;
        case 6:
          editing -=1;
          cursorY -= 1;
          cursorX= 11  + this->estado.length();

          move(cursorY, cursorX);
          break;
      }
      break;
    case 27: // Esc key
      return 1;
      break;
    case KEY_ENTER:
      //! TODO: Confirmar o usuário
      if(editing == 6){
        filterSearch();
      }
      break;
    default: 
      if(!isalnum(ch))break;
      switch (editing){
        case 1:
          echochar(ch);
          this->inicDate.push_back(ch);
          break;
        case 2:
          echochar(ch);
          this->finshDate.push_back(ch);
          break;
        case 3:
          echochar(ch);
          this->cidade.push_back(ch);
          break;
        case 4:
          echochar(ch);
          this->sigla.push_back(ch);
          break;
        case 5:
          echochar(ch);
          this->estado.push_back(ch);
          break;
      }
  }

  return 0;
}

void  EventSearchView::renderSearchOptions(){

  // Procura
  printw("  ### Dados da procura ### \n");
  printw(" Desde de [XX/XX]: \n");
  printw(" Até [XX/XX]: \n");
  printw(" Cidade: \n");
  printw(" Sigla: \n");
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
  cursorX = 21;
  keypad(stdscr, TRUE);
  this->editing = 1;
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