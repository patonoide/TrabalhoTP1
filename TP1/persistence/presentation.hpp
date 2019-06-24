#ifndef PRE_PER_H
#define PRE_PER_H

#include <list>
#include "../model/presentation.hpp"
#include "../model/event.hpp"
#include "../dominios/event_DOM.hpp"
#include "persistence.hpp"
#include <iostream>
#include <string>
using namespace std;


class CombinationEA {

private:
Event event;
list<Presentation> lista;

public:
CombinationEA();
inline void setEvent(Event event){
        this->event = event;
}
inline Event getEvent(){
        return this->event;
}

void addPresentation(Presentation);
void deletePresentation(CodigoApresentacao);

list<Presentation> getPresentations();

};

class PresentationPer : public Persistence {

private:
static list<CombinationEA> lista;

public:
void addPresentation(Presentation, Event);
void removePresention(CodigoApresentacao);
void removePresentionwithEvent(CodigoEvento);
list<CombinationEA> listPresentation();


};



#endif