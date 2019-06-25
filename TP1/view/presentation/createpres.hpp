#ifndef VIEWS_PRESENTATION_CREATE_HPP
#define VIEWS_PRESENTATION_CREATE_HPP

#include "../Application.hpp"
#include "../../model/presentation.hpp"

class PresentationCreateView : public ApplicationView{
  private:
  int processarOpcao(int); /// Processa uma opção pega pelo getch() 
  void mostrarOpcoes();     /// Printa as opções dessa tela  
  
  void renderCreateOptions();


  std::string arr[7];
  int editing;
  public:
  void setAttrs();
  void printTitulo();
  void handleInput();

  void confirmar();
};



#endif