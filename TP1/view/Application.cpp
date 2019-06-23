#include "Application.hpp"

void ApplicationView::render(){
    erase();
    initscr();
    this->printTitulo();
    this->mostrarOpcoes();
    this->handleInput();
    refresh();
}

void ApplicationView::redirectTo(ApplicationView &newScreen){
    erase();
    newScreen.render();
    refresh();
}