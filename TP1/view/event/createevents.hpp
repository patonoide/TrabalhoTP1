#ifndef VIEWS_EVENT_CREATE_HPP
#define VIEWS_EVENT_CREATE_HPP

#include "../Application.hpp"
#include "../../model/event.hpp"

class EventCreateView : public ApplicationView{
  private:
  int processarOpcao(int); /// Processa uma opção pega pelo getch() 
  void mostrarOpcoes();     /// Printa as opções dessa tela  
  
  void renderCreateOptions();

  std::string faixa;
  std::string classe;
  std::string estado;
  std::string cidade;
  std::string nome;
  std::string codigo;
  
  std::string arr[6];
  int editing;
  public:
  void setAttrs();
  void printTitulo();
  void handleInput();
};



#endif