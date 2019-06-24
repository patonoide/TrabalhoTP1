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
Presentation searchPresentation(CodigoApresentacao);
list<Presentation> getPresentations();

};

class PresentationPer : public Persistence {

private:
static list<CombinationEA> lista;
static int n;
PresentationPer();
static PresentationPer *p;
void checarQuantidade(CodigoEvento);

public:
static PresentationPer* criar();
void addPresentation(Presentation, Event);
void removePresention(CodigoApresentacao);
void removePresentionwithEvent(CodigoEvento);
list<CombinationEA> listPresentation();
Presentation searchPresentation(CodigoApresentacao);


};



#endif
