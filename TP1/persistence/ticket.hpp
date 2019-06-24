#ifndef TIK_PER_H
#define TIK_PER_H

#include <list>
#include "../model/user.hpp"
#include "../model/ticket.hpp"
#include "../model/presentation.hpp"
#include "presentation.hpp"
#include "user.hpp"
#include "../dominios/user_DOM.hpp"
#include "../dominios/presentation_DOM.hpp"
#include "persistence.hpp"
#include "../dominios/ticket_DOM.hpp"
#include <iostream>
#include <string>
using namespace std;


class CombinationUPT {

private:
User user;
Presentation pres;
Ticket ticket;

public:
inline void setUser(User user){
        this->user = user;
}

inline User getUser(){
        return this->user;
}

inline void setPresentation(Presentation pres){
        this->pres = pres;
}

inline Presentation getPresentation(){
        return this->pres;
}

inline void setTicket(Ticket ticket){
        this->ticket = ticket;
}

inline Ticket getTicket(){
        return this->ticket;
}

};

class TicketPer : public Persistence {

private:
static list<CombinationUPT> lista;

public:
void addTicket(Presentation, Ticket, User);
void removeTicket(CodigoIngresso);
list<CombinationUPT> listTicket();
void removeTicketwithUser(Cpf);
void removeTicketwithPresentation(CodigoApresentacao);
Ticket searchTicketwithUser(Cpf);


};



#endif
