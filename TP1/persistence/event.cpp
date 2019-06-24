#include "event.hpp"

list<CombinationUE> EventoPer::lista;

CombinationUE::CombinationUE(){
        list<Event> listac;
        this->lista = listac;
}

void CombinationUE::addEvent(Event evento){
        this->lista.push_back(evento);
}

void CombinationUE::deleteEvent(CodigoEvento cod){
        list<Event>::iterator it;
        list<Event>::iterator ittemp;

        for (it = this->lista.begin(); it != this->lista.end();) {

                if((*it).getCodigoEvento().getValor() == cod.getValor()) {
                        ittemp = it++;
                        lista.erase(it);
                        it = ittemp;
                }else{

                        it++;
                }

        }
}

list<Event> CombinationUE::getEvents(){
        return this->lista;
}

void EventoPer::addEvent(Event evento, User user){
        checarQuantidade(user.getCpf());
        CombinationUE comb;
        comb.setUser(user);
        comb.addEvent(evento);
        lista.push_back(comb);

}

void EventoPer::removeEvent(CodigoEvento cod){
        list<CombinationUE>::iterator it;
        list<Event>::iterator ite;

        PresentationPer per;
        per.removePresentionwithEvent(cod);

        CombinationUE comb;
        for (it = lista.begin(); it != lista.end();) {
                comb = (*it);
                comb.deleteEvent(cod);
                it++;
        }
}

list<CombinationUE> EventoPer::listEvent(){
        return lista;
}

void EventoPer::checarQuantidade(Cpf cpf){

        list<CombinationUE>::iterator it;
        list<CombinationUE>::iterator ittemp;
        int cont = 0;
        for (it = this->lista.begin(); it != this->lista.end();) {

                if((*it).getUser().getCpf().getValor() == cpf.getValor()) {
                        cont++;
                }else{

                        it++;
                }

        }
        if(cont >= 5){
           throw std::invalid_argument("Já tem 5 no banco");
        }
}

void EventoPer::removeEventwithUser(Cpf cpf){
  list<CombinationUE>::iterator it;
  list<CombinationUE>::iterator ittemp;

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
