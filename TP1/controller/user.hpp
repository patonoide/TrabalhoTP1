#ifndef USER_CONTROLLER_HPP
#define USER_CONTROLLER_HPP

#include "Application.hpp"
#include "../view/include.hpp"
#include "../model/user.hpp"
#include <iostream>

class UserController : public ApplicationController{
    private:
    User current_user;

    public:
    void GET_login(){
      LogarView newView;
      newView.render();

    }
    void GET_signup(){
      CadastrarView newView;
      newView.render();

    }
    void GET_edit(){
      UserEditView newView;
      newView.render();

    }

    void GET_perfil();

    void POST_editar(std::string *information);
    void POST_signup(std::string *information);
    void POST_login(std::string *information);
};

#endif