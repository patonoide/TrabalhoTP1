#ifndef DOM_TICKET_H
#define DOM_TICKET_H

#include "abstract_DOM.hpp"

class CodigoApresentacao : public Abstracts::Codigo{
	private:
  public:
    void setCodigo(string) throw(invalid_argument);
    string getCodigo(); 
};

#endif