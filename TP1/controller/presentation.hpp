#ifndef PRESENTATION_CONTROLLER_HPP
#define PRESENTATION_CONTROLLER_HPP

#include "Application.hpp"
#include "../view/include.hpp"
#include "user.hpp"
#include <iostream>

class PresentationController : public ApplicationController{

    public:
    void GET_index();
    
    void POST_create(std::string *params);
    void GET_create();
};

#endif