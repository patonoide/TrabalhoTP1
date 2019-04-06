#ifndef DOM_TICKET_H
#define DOM_TICKET_H

#include "abstract_DOM.hpp"

class CodigoIngresso : public Abstracts::Codigo{
  public:
    CodigoIngresso(){
      TAMANHO = 5;
    }
};

#endif