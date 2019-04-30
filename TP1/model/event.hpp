#ifndef ENTIDADES_EVENT_H
#define ENTIDADES_EVENT_H

#include "../dominios/event_DOM.hpp"
#include "model.hpp"

/**
 * @brief Classe Representante da entidade Evento
 * 
 *  Possui atributos:
 *  Faixa, Classe, Estado, Cidade, Name, CodigoEvento
 * 
 *  O salvamento dos atributos e retornos de seus valores são feitos através de set
 */
class Event: public Model{
  private:
    Faixa faixa;
    Classe classe;
    Estado estado;
    Cidade cidade;
    Name nome;
    CodigoEvento codigo;
  public:

    /// Recebe uma instancia de Faixa e salva no seu respectivo atibuto da classe
    void setFaixa(Faixa &toSet){this->faixa = toSet;}
    /// Retorna atributo Faixa
    Faixa getFaixa(){return this->faixa;}

    /// Recebe uma instancia de Classe e salva no seu respectivo atibuto da classe
    void setClasse(Classe &toSet){this->classe = toSet;}
    /// Retorna atributo Classe
    Classe getClasse(){return this->classe;}

    /// Recebe uma instancia de Estado e salva no seu respectivo atibuto da classe
    void setEstado(Estado &toSet){this->estado = toSet;}
    /// Retorna atributo Estado
    Estado getEstado(){return this->estado;}

    /// Recebe uma instancia de Cidade e salva no seu respectivo atibuto da classe
    void setCidade(Cidade &toSet){this->cidade = toSet;}
    /// Retorna atributo Cidade
    Cidade getCidade(){return this->cidade;}

    /// Recebe uma instancia de Name e salva no seu respectivo atibuto da classe
    void setName(Name &toSet){this->nome = toSet;}
    /// Retorna atributo Name
    Name getName(){return this->nome;}

    /// Recebe uma instancia de CodigEvento e salva no seu respectivo atibuto da classe
    void setCodigoEvento(CodigoEvento &toSet){this->codigo = toSet;}
    /// Retorna atributo CodigEvento
    CodigoEvento getCodigoEvento(){return this->codigo;}
};


#endif