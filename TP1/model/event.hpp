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
    inline void setFaixa(Faixa &toSet);
    inline Faixa getFaixa();
    
    inline void setClasse(Classe &toSet);
    inline Classe getClasse();
    
    inline void setEstado(Estado &toSet);
    inline Estado getEstado();

    inline void setCidade(Cidade &toSet);
    inline Cidade getCidade();

    inline void setName(Name &toSet);
    inline Name getName();

    inline void setCodigoEvento(CodigoEvento &toSet);
    inline CodigoEvento getCodigoEvento();
};


#endif