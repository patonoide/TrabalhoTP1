#ifndef EVENT_CONTROLLER_HPP
#define EVENT_CONTROLLER_HPP

#include "Application.hpp"
#include "../view/include.hpp"
#include "../model/event.hpp"
#include <iostream>

class EventController : public ApplicationController{
    private:
    protected:

    public:
    void GET_create(){


    }
    void GET_index(){
        EventListView newView;
        newView.render();

    }
    void GET_search(){
        EventListView newView;
        newView.render();

    }
};

#endif