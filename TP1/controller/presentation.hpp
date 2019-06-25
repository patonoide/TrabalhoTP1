#ifndef PRESENTATION_CONTROLLER_HPP
#define PRESENTATION_CONTROLLER_HPP

#include "Application.hpp"
#include "../view/include.hpp"
#include "user.hpp"
#include <iostream>

class PresentationController : public ApplicationController{

    public:
    void GET_index();
    
};

#endif