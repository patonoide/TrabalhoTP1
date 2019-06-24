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

    std::string f_msg;
    static int contador;
    static PerfilView* ref;
    
    PerfilView(User &new_user);
    PerfilView();

    static PerfilView* getInstance(User &newUser);
    static PerfilView* getInstance();
    void printTitulo();
    void handleInput();
};



#endif