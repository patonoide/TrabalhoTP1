#include "event.hpp"

list<CombinationUE> EventoPer::lista;

int EventoPer::n = 0;
EventoPer* EventoPer::e = NULL;
EventoPer::EventoPer(){
}

EventoPer* EventoPer::criar(){
        if(n == 0) {
                n++;
                e = new EventoPer();
        }
        return e;
}

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

        PresentationPer *per = PresentationPer::criar();
        per->removePresentionwithEvent(cod);

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

        // list<CombinationUE>::iterator it;
        // list<CombinationUE>::iterator ittemp;
        // int cont = 0;
        // for (it = this->lista.begin(); it != this->lista.end();) {
        //
        //         if((*it).getUser().getCpf().getValor() == cpf.getValor()) {
        //                 cont++;
        //         }else{
        //
        //                 it++;
        //         }
        //
        // }
        // if(cont >= 5) {
        //         throw std::invalid_argument("Já tem 5 no banco");
        // }
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

list<Event> EventoPer::searchEventwith(Estado estado, Cidade cidade){
        list<CombinationUE>::iterator it;
        list<Event>::iterator ite;
        list<Event> result;
        CombinationUE comb;
        for (it = this->lista.begin(); it != this->lista.end();) {

                comb = (*it);
                for (ite = comb.getEvents().begin(); ite != comb.getEvents().end();) {
                        if((*ite).getEstado().getValor() == estado.getValor() && (*ite).getCidade().getValor() == cidade.getValor()) {
                                result.push_back((*ite));
                        }
                        ite++;
                }


                it++;
        }

        if(!result.empty()) {
                throw std::invalid_argument("Não existe");
        }else{
                return result;
        }
}

list<Event> EventoPer::listEvents(){
        list<Event> result;
        list<CombinationUE>::iterator it;
        list<Event>::iterator itevent;
        list<Event> list;
        for (it = this->lista.begin(); it != this->lista.end();) {
                list = (*it).getEvents();

                for (itevent = list.begin(); itevent != list.end();) {

                        result.push_back((*itevent));

                        itevent++;

                }
                it++;

        }
        return result;

}
