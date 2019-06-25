#ifndef VIEWS_PRESENTATION_LIST_HPP
#define VIEWS_PRESENTATION_LIST_HPP

#include "../Application.hpp"
#include "../../model/presentation.hpp"
#include <list>

class PresentationListView : public ApplicationView{
    private:
    int processarOpcao(int); /// Processa uma opção pega pelo getch() 
    void mostrarOpcoes();     /// Printa as opções dessa tela  

    std::list <Presentation> allPress;

    public:
    PresentationListView(){}
    PresentationListView(std::list <Presentation> &toAdd){
      allPress = toAdd;
    }

    void printTitulo();
    void handleInput();
};



#endif