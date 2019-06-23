#include "logar.hpp"
#include "../Home.hpp"
#include "../../controller/user.hpp"
#include <ctype.h>

void LogarView::printTitulo(){
  printw("\t\t\t%s\n", "Logar");
  refresh();
}

void LogarView::ConfirmarDados(){
  UserController usrCrt;

  std::string params[2];
  params[0] = username;
  params[1] = password;

  usrCrt.POST_login(params);
}

int LogarView::processarOpcao(int ch){
  HomeView Hview;

  switch (ch)
  {
  case KEY_DOWN:
    if (editing == 3){}
    if ( editing == 2 ){
      editing = 3;
      move(4, 10);
    }
    if (editing == 1){
      editing = 2;
      move(3,8 + this->password.length());

    }
    break;
  case KEY_UP:
    if (editing == 1);
    if ( editing == 2 ){
      editing = 1;
      move(2,11 + this->username.length());
    }
    if ( editing == 3 ){
      editing = 2;
      move(3,8+ this->password.length());
    }
    break;
  case KEY_BACKSPACE:
    if (editing == 1){
      this->username.pop_back();
      move(2,11 + this->username.length());
    }
    if ( editing == 2 ){
      this->password.pop_back();
      move(2,8 + this->password.length());
    }
    break;
  case 27: // Esc key
    return Return;
    break;
  case 10: // Enter
    if( editing == 3){
      ConfirmarDados();

      return Return;
    }
    break;
  default:
    if(!isalnum(ch))break;
    if (editing == 1){
      echochar(ch);
      this->username.push_back(ch);
    }
    if ( editing == 2 ){
      echochar((int)'*');
      this->password.push_back(ch);
    }
  }

  return Ok;
}

void  LogarView::mostrarOpcoes(){

  // Printa as opções
  printw("\t (ESC) VOLTAR PARA INICIO\n");
  printw(" Username: \n");
  printw(" Senha: \n");
  
  // Move o cursor
  curs_set(1);
  move(2, 11);
  this->editing = 1;

  // Mostra as alterações
  keypad(stdscr, TRUE);
  refresh();
}

void LogarView::handleInput(){
  int ch;
  int ret;
  while(true){
    ch = getch();
    ret = this->processarOpcao(ch);
    if(ret == Return)return;
  }
}
