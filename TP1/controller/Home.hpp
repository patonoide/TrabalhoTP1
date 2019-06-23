#ifndef HOME_CONTROLLER_HPP
#define HOME_CONTROLLER_HPP

#include "Application.hpp"
#include "../view/Home.hpp"
#include <iostream>

class HomeController : public ApplicationController{

    public:
    void GET_welcome(){
      HomeView newView;
      newView.render();
    }
};

#endif