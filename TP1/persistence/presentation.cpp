#include "presentation.hpp"

list<CombinationEA> PresentationPer::lista;

CombinationEA::CombinationEA(){
        list<Presentation> listac;
        this->lista = listac;
}

void CombinationEA::addPresentation(Presentation pres){
        this->lista.push_back(pres);
}

void CombinationEA::deletePresentation(CodigoApresentacao cod){
        list<Presentation>::iterator it;
        list<Presentation>::iterator ittemp;

        for (it = this->lista.begin(); it != this->lista.end();) {

                if((*it).getCodigoApresentacao().getValor() == cod.getValor()) {
                        ittemp = it++;
                        lista.erase(it);
                        it = ittemp;
                }else{

                        it++;
                }

        }
}



list<Presentation> CombinationEA::getPresentations(){
        return this->lista;
}

void PresentationPer::addPresentation(Presentation pre, Event evento){
        CombinationEA comb;
        comb.setEvent(evento);
        comb.addPresentation(pre);
        lista.push_back(comb);

}

void PresentationPer::removePresention(CodigoApresentacao cod){
        list<CombinationEA>::iterator it;

        list<Presentation>::iterator ite;
        CombinationEA comb;
        for (it = lista.begin(); it != lista.end();) {
                comb = (*it);
                comb.deletePresentation(cod);
                it++;
        }
}

void PresentationPer::removePresentionwithEvent(CodigoEvento cod){
        list<CombinationEA>::iterator it;
        list<CombinationEA>::iterator ittemp;

        for (it = this->lista.begin(); it != this->lista.end();) {

                if((*it).getEvent().getCodigoEvento().getValor() == cod.getValor()) {
                        ittemp = it++;
                        lista.erase(it);
                        it = ittemp;
                }else{

                        it++;
                }

        }
}

list<CombinationEA> PresentationPer::listPresentation(){
        return lista;
}
