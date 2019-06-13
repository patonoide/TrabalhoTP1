#include "user.hpp"
#include "Home.hpp"

void UserView::printTitulo(){
  printw("\t\t\t%s\n", "Logar");
  refresh();
}

void UserView::processarOpcao(int ch){
  HomeView Hview;

  switch (ch)
  {
  case KEY_DOWN:
    if (editing == USERNAME){
      editing = PASSWORD;
      move(3,8 + this->password.length());

    }
    if ( editing == PASSWORD );
    break;
  case KEY_UP:
    if (editing == USERNAME);
    if ( editing == PASSWORD ){
      editing = USERNAME;
      move(2,11 + this->username.length());
    }
    break;
  case KEY_BACKSPACE:
    if (editing == USERNAME){
      this->username.pop_back();
      move(2,11 + this->username.length());
    }
    if ( editing == PASSWORD ){
      this->password.pop_back();
      move(2,8 + this->password.length());
    }
    break;
  case 27: // Esc key
    this->redirectTo(Hview);
    break;
  default:
    if (editing == USERNAME){
      echochar(ch);
      this->username.push_back(ch);
    }
    if ( editing == PASSWORD ){
      echochar((int)'*');
      this->password.push_back(ch);
    }
  }
}

void  UserView::mostrarOpcoes(){

  // Printa as opções
  printw("\t (ESC) VOLTAR PARA INICIO\n");
  printw(" Username: \n");
  printw(" Senha: \n");
  
  // Move o cursor
  move(2, 11);
  this->editing = this->USERNAME;

  // Mostra as alterações
  keypad(stdscr, TRUE);
  refresh();
}

void UserView::handleInput(){
  int ch;
  while(true){
    ch = getch();
    this->processarOpcao(ch);
  }
}
