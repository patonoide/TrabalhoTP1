#ifndef VIEWS_EVENT_LIST_HPP
#define VIEWS_EVENT_LIST_HPP

#include "../Application.hpp"


class EventListView : public ApplicationView{
    private:
    int processarOpcao(int); /// Processa uma opção pega pelo getch() 
    void mostrarOpcoes();     /// Printa as opções dessa tela  

    public:
    void printTitulo();
    void handleInput();
};



#endif