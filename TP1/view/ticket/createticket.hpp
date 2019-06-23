#ifndef VIEWS_TICKET_CREATE_HPP
#define VIEWS_TICKET_CREATE_HPP

#include "../Application.hpp"
#include "../../model/ticket.hpp"

class TicketCreateView : public ApplicationView{
  private:
  int processarOpcao(int); /// Processa uma opção pega pelo getch() 
  void mostrarOpcoes();     /// Printa as opções dessa tela  
  
  void renderCreateOptions();

  std::string codigo;
  std::string quantidade;
  
  std::string arr[2];
  int editing;
  public:
  void setAttrs();
  void printTitulo();
  void handleInput();
};



#endif