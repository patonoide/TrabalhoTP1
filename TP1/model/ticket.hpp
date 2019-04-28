#ifndef ENTIDADES_TICKET_H
#define ENTIDADES_TICKET_H

#include "../dominios/ticket_DOM.hpp"

class Ticket{
    private:
    CodigoIngresso codigo;
    public:

    inline void setCodigoIngresso(CodigoIngresso &toSet);
    inline CodigoIngresso getCodigoIngresso();
};

void Ticket::setCodigoIngresso(CodigoIngresso &toSet){
    this->codigo = toSet;
}
CodigoIngresso Ticket::getCodigoIngresso(){return this->codigo;}


#endif