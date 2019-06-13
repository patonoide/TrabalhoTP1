#include "Application.hpp"

void ApplicationView::render(){
    initscr();
    this->printTitulo();
    this->mostrarOpcoes();
    this->handleInput();
}

void ApplicationView::redirectTo(ApplicationView &newScreen){
    erase();
    newScreen.render();
    refresh();
}