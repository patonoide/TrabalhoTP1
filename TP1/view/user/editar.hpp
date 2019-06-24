#ifndef VIEWS_USER_EDIT_HPP
#define VIEWS_USER_EDIT_HPP

#include "../Application.hpp"
#include "../../model/ticket.hpp"

class UserEditView : public ApplicationView{
  private:
  int processarOpcao(int); /// Processa uma opção pega pelo getch() 
  void mostrarOpcoes();     /// Printa as opções dessa tela  
  
  void renderCreateOptions();

  std::string senha;
  
  std::string arr[1];
  int editing;
  public:

  void ConfirmaOpcao();

  void setAttrs();
  void printTitulo();
  void handleInput();
};



#endif