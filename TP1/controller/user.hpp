#ifndef USER_CONTROLLER_HPP
#define USER_CONTROLLER_HPP

#include "Application.hpp"
#include "../view/include.hpp"
#include "../model/user.hpp"
#include <iostream>

class UserController : public ApplicationController{
    private:
    protected:

    public:
    void GET_login(){
      LogarView newView;
      newView.render();

    }
    void GET_signup(){
      CadastrarView newView;
      newView.render();

    }
    void GET_edit(User &toEdit){
      UserEditView newView;
      newView.render();

    }

    void POST_signup(std::string *information);

};

#endif