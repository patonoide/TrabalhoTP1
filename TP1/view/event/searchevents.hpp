#ifndef VIEWS_EVENT_SEARCH_HPP
#define VIEWS_EVENT_SEARCH_HPP

#include "../Application.hpp"
#include "../../model/event.hpp"
#include <list>

class EventSearchView : public ApplicationView{
  private:
  int processarOpcao(int); /// Processa uma opção pega pelo getch() 
  void mostrarOpcoes();     /// Printa as opções dessa tela  
  
  // Funções de renderização
  void renderSearchOptions();
  void renderListEvents();

  // Função de procura
  void filterSearch();

  std::list <Event> toShow;

  // Salvar informação digitada
  std::string inicDate;
  std::string finshDate;
  std::string cidade;
  std::string sigla;
  std::string estado;

  std::string arr[5];

  // Controlar cursor
  int editing;

  public:
  EventSearchView(std::list <Event> &toSearch){
    toShow = toSearch;
  }
  EventSearchView(){}

  void printTitulo();
  void handleInput();
};



#endif