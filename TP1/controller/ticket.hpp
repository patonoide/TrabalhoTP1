#ifndef HOME_CONTROLLER_HPP
#define HOME_CONTROLLER_HPP

#include "Application.hpp"
#include "../view/Home.hpp"
#include "../view/ticket/createticket.hpp"
#include <iostream>

class TicketController : public ApplicationController{

    public:
    void GET_create(){
      TicketCreateView newView;
      newView.render();
    }
    
    void POST_create(std::string *params);
};

#endif