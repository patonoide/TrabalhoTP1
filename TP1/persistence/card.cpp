#include "card.hpp"

list<CombinationUC> CardPer::lista;

int CardPer::n = 0;
CardPer* CardPer::c = NULL;
CardPer::CardPer(){}

CardPer* CardPer::criar(){
        if(n == 0) {
                n++;
                c = new CardPer();
        }
        return c;
}

void CardPer::addCard(Card card, Cpf user){

        CombinationUC comb;
        comb.setCard(card);
        comb.setCpf(user);
        lista.push_back(comb);

}

void CardPer::removeCard(NumeroCartao cartao){
        list<CombinationUC>::iterator it;
        list<CombinationUC>::iterator ittemp;

        for (it = lista.begin(); it != lista.end();) {

                if((*it).getCard().getNumeroCartao().getValor() == cartao.getValor()) {
                        ittemp = it++;
                        lista.erase(it);
                        it = ittemp;
                }else{

                        it++;
                }

        }
}

list<CombinationUC> CardPer::listCard(){
        return lista;
}

void CardPer::removeCardwithUser(Cpf cpf){
        list<CombinationUC>::iterator it;
        list<CombinationUC>::iterator ittemp;

        for (it = lista.begin(); it != lista.end();) {

                if((*it).getCpf().getValor() == cpf.getValor()) {
                        ittemp = it++;
                        lista.erase(it);
                        it = ittemp;
                }else{

                        it++;
                }

        }
}
