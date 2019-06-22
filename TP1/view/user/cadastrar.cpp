#include "cadastrar.hpp"
#include "../Home.hpp"

void CadastrarView::printTitulo(){
  printw("\t\t\t%s\n", "Cadastrar");
  refresh();
}


void CadastrarView::mostrarOpcoes(){
  printw("\t (ESC) VOLTAR PARA INICIO\n");
  // Usuário
  printw("  ### Dados do usuario ### \n");
  printw(" CPF :\n");
  printw(" Senha: \n\n");
  // Cartao de credito
  printw("  ### Dados do Cartão de crédito ### \n");
  printw(" Data de validade: \n");
  printw(" Codigo de Seguranca: \n");
  printw(" Numero do Cartão: \n ");

  cursorY = 3;
  cursorX = 6;
  keypad(stdscr, TRUE);
  this->editing = 1;
  move(cursorY, cursorX);
}


void CadastrarView::handleInput(){
  int ch;
  int ret;
  while(true){
    ch = getch();
    ret = this->processarOpcao(ch);
    if(ret == 1) return;
  }
}

int CadastrarView::processarOpcao(int ch){
  HomeView Hview;

  switch (ch){
  //! Caso Seta para Baixo
  case KEY_DOWN:
    switch (editing){
      case 1:
        editing +=1;
        cursorY +=1 ;
        cursorX = 8 + this->password.length() ;

        move(cursorY, cursorX);
        break;
      case 2:
        editing+=1;
        cursorY+=3 ;
        cursorX=19 + this->dataval.length();

        move(cursorY, cursorX);
        break;
      case 3:
        editing+=1;
        cursorY+=1 ;
        cursorX=22 + this->codcart.length();

        move(cursorY, cursorX);
        break;
      case 4:
        editing+=1;
        cursorY+=1 ;
        cursorX= 19  + this->numcart.length();

        move(cursorY, cursorX);
        break;
      case 5:
        editing +=1;
        cursorY +=2;
        cursorX = 10;

        move(cursorY, cursorX);
        break;
      case 6:
        break;
    }
    break;

  //! Caso da Seta para cima
  case KEY_UP:
    switch (editing){
      case 1:
        break;
      case 2:
        editing-=1;
        cursorY-=1 ;
        cursorX = 8 + this->cpf.length() ;

        move(cursorY, cursorX);
        break;
      case 3:
        editing-=1;
        cursorY-=3 ;
        cursorX=8 + this->password.length();

        move(cursorY, cursorX);
        break;
      case 4:
        editing-=1;
        cursorY-=1 ;
        cursorX=19 + this->dataval.length();

        move(cursorY, cursorX);
        break;
      case 5:
        editing -=1;
        cursorY -=1 ;
        cursorX= 22 + this->codcart.length();

        move(cursorY, cursorX);
        break;
      case 6:
        editing -=1;
        cursorY -= 2;
        cursorX= 19  + this->numcart.length();

        move(cursorY, cursorX);
        break;
    }
    break;
  case 10:
    //? TODO: Confirmar o usuário


    break;
  case 27: // Esc key
    return 1;
    break;
  default:
    switch (editing){
      case 2:
        echochar((int)'*');
        this->password.push_back(ch);
        break;
      case 1:
        echochar(ch);
        this->cpf.push_back(ch);
        break;
      case 3:
        echochar(ch);
        this->dataval.push_back(ch);
        break;
      case 4:
        echochar(ch);
        this->codcart.push_back(ch);
        break;
      case 5:
        echochar(ch);
        this->numcart.push_back(ch);
        break;
    }
  }
  return 0;
}
