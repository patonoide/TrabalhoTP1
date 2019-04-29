#include "event.hpp"

void Event::setFaixa(Faixa &toSet){this->faixa = toSet;}
Faixa Event::getFaixa(){return this->faixa;}

void Event::setClasse(Classe &toSet){this->classe = toSet;}
Classe Event::getClasse(){return this->classe;}

void Event::setEstado(Estado &toSet){this->estado = toSet;}
Estado Event::getEstado(){return this->estado;}

void Event::setCidade(Cidade &toSet){this->cidade = toSet;}
Cidade Event::getCidade(){return this->cidade;}

void Event::setName(Name &toSet){this->nome = toSet;}
Name Event::getName(){return this->nome;}

void Event::setCodigoEvento(CodigoEvento &toSet){this->codigo = toSet;}
CodigoEvento Event::getCodigoEvento(){return this->codigo;}
