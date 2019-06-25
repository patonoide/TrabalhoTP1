#ifndef EVENT_PER_H
#define EVENT_PER_H

#include <list>
#include "../model/user.hpp"
#include "../model/event.hpp"
#include "../dominios/event_DOM.hpp"
#include "../dominios/user_DOM.hpp"
#include "persistence.hpp"
#include <iostream>
#include <string>
#include "presentation.hpp"
using namespace std;


class CombinationUE : public Persistence {

private:
User user;
list<Event> lista;

public:
CombinationUE();
inline void setUser(User user){
        this->user = user;
}
inline User getUser(){
        return this->user;
}

void addEvent(Event);
void deleteEvent(CodigoEvento);
list<Event> getEvents();

};

class EventoPer : public Persistence {

private:
static list<CombinationUE> lista;
void checarQuantidade(Cpf);
static int n;
EventoPer();
static EventoPer *e;

public:
static EventoPer* criar();
void addEvent(Event, User);
void removeEvent(CodigoEvento);
list<CombinationUE> listEvent();
void removeEventwithUser(Cpf);
list<Event> searchEventwith(Estado, Cidade);
list<Event> listEvents();

};



#endif
