#ifndef CARD_PER_H
#define CARD_PER_H

#include <list>
#include "../model/user.hpp"
#include "../model/card.hpp"
#include "persistence.hpp"
#include "../dominios/user_DOM.hpp"
#include "../dominios/creditcard_DOM.hpp"
#include <iostream>
#include <string>
using namespace std;


class CombinationUC {

private:
User user;
Card card;

public:
inline void setCard(Card card){
        this->card = card;
}
inline void setUser(User user){
        this->user = user;
}
inline Card getCard(){
        return this->card;
}
inline User getUser(){
        return this->user;
}

};

class CardPer : public Persistence {

private:
static list<CombinationUC> lista;
static int n;
CardPer();
static CardPer *c;

public:
static CardPer* criar();
void addCard(Card, User);
void removeCard(NumeroCartao);
list<CombinationUC> listCard();
void removeCardwithUser(Cpf);

};



#endif
