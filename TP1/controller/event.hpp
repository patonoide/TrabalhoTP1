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

    void GET_index();
    
    void GET_create();
    void POST_create(std::string *params);


    void GET_search(){
        EventSearchView newView;
        newView.render();
    }
    void POST_search(std::string*);
};

#endif