#ifndef ENTIDADES_EVENT_H
#define ENTIDADES_EVENT_H

#include "../dominios/event_DOM.hpp"
#include "model.hpp"
class Event: public Model{
  private:
    Faixa faixa;
    Classe classe;
    Estado estado;
    Cidade cidade;
    Name nome;
    CodigoEvento codigo;
  public:
    void setFaixa(Faixa &toSet){this->faixa = toSet;}
    Faixa getFaixa(){return this->faixa;}

    void setClasse(Classe &toSet){this->classe = toSet;}
    Classe getClasse(){return this->classe;}

    void setEstado(Estado &toSet){this->estado = toSet;}
    Estado getEstado(){return this->estado;}

    void setCidade(Cidade &toSet){this->cidade = toSet;}
    Cidade getCidade(){return this->cidade;}

    void setName(Name &toSet){this->nome = toSet;}
    Name getName(){return this->nome;}

    void setCodigoEvento(CodigoEvento &toSet){this->codigo = toSet;}
    CodigoEvento getCodigoEvento(){return this->codigo;}
};


#endif