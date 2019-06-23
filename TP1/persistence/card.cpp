#include "card.hpp"

list<CombinationUC> CardPer::lista;

void CardPer::addCard(Card card, User user){

        CombinationUC comb;
        comb.setCard(card);
        comb.setUser(user);
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
