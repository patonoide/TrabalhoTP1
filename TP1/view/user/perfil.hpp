#ifndef VIEWS_USER_PERFIL_HPP
#define VIEWS_USER_PERFIL_HPP

#include "../Application.hpp"
#include "../../model/user.hpp"

class PerfilView : public ApplicationView{
    private:
    int processarOpcao(int); /// Processa uma opção pega pelo getch() 
    void mostrarOpcoes();     /// Printa as opções dessa tela  

    User current_user;
    public:
    PerfilView(User &new_user){
      current_user = new_user;
    } 
    void printTitulo();
    void handleInput();
};



#endif