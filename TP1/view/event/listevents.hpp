#ifndef VIEWS_EVENT_LIST_HPP
#define VIEWS_EVENT_LIST_HPP

#include "../Application.hpp"
#include "../../model/event.hpp"
#include <list>

class EventListView : public ApplicationView{
    private:
    int processarOpcao(int); /// Processa uma opção pega pelo getch() 
    void mostrarOpcoes();     /// Printa as opções dessa tela  

    std::list <Event> todosEventos;

    public:
    EventListView(std::list <Event> &toAdd){
        todosEventos = toAdd;
    }

    void printTitulo();
    void handleInput();
};



#endif