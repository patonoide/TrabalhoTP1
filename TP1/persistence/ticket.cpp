#include "ticket.hpp"

list<CombinationUPT> TicketPer::lista;

void TicketPer::addTicket(Presentation pres, Ticket ticket, User user){
        CombinationUPT comb;
        comb.setTicket(ticket);
        comb.setUser(user);
        comb.setPresentation(pres);
        lista.push_back(comb);
}

void TicketPer::removeTicket(CodigoIngresso cod){
  list<CombinationUPT>::iterator it;
  list<CombinationUPT>::iterator ittemp;

  for (it = this->lista.begin(); it != this->lista.end();) {

          if((*it).getTicket().getCodigoIngresso().getValor() == cod.getValor()) {
                  ittemp = it++;
                  lista.erase(it);
                  it = ittemp;
          }else{

                  it++;
          }

  }
}

void TicketPer::removeTicketwithUser(Cpf cpf){
  list<CombinationUPT>::iterator it;
  list<CombinationUPT>::iterator ittemp;

  for (it = this->lista.begin(); it != this->lista.end();) {

          if((*it).getUser().getCpf().getValor() == cpf.getValor()) {
                  ittemp = it++;
                  lista.erase(it);
                  it = ittemp;
          }else{

                  it++;
          }

  }
}

void TicketPer::removeTicketwithPresentation(CodigoApresentacao cod){
  list<CombinationUPT>::iterator it;
  list<CombinationUPT>::iterator ittemp;

  for (it = this->lista.begin(); it != this->lista.end();) {

          if((*it).getPresentation().getCodigoApresentacao().getValor() == cod.getValor()) {
                  ittemp = it++;
                  lista.erase(it);
                  it = ittemp;
          }else{

                  it++;
          }

  }
}

Ticket TicketPer::searchTicketwithUser(Cpf cpf){
  list<CombinationUPT>::iterator it;
  Ticket result;

  for (it = lista.begin(); it != lista.end();) {

          if((*it).getUser().getCpf().getValor() == cpf.getValor()) {

                  return (*it).getTicket();
          }else{

                  it++;
          }

  }
  throw std::invalid_argument("Não existe");
}
