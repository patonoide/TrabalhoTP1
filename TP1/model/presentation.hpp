#ifndef ENTIDADES_PRESENTATION_H
#define ENTIDADES_PRESENTATION_H

#include "../dominios/presentation_DOM.hpp"
#include "model.hpp"
class Presentation: public Model{
    private:
    CodigoApresentacao codigo;
    Data data;
    Horario horario;
    Preco preco;
    NumeroSala numero;
    Disponibilidade disponibilidade;
    public:
    inline void setCodigoApresentacao(CodigoApresentacao &toSet);
    inline CodigoApresentacao getCodigoApresentacao();

    inline void setData(Data &toSet);
    inline Data getData();

    inline void setHorario(Horario &toSet);
    inline Horario getHorario();

    inline void setPreco(Preco &toSet);
    inline Preco getPreco();

    inline void setNumeroSala(NumeroSala &toSet);
    inline NumeroSala getNumeroSala();

    inline void setDisponibilidade(Disponibilidade &toSet);
    inline Disponibilidade getDisponibilidade();
};

void Presentation::setCodigoApresentacao(CodigoApresentacao &toSet){
    this->codigo = toSet;
}
CodigoApresentacao Presentation::getCodigoApresentacao(){return this->codigo;}

void Presentation::setData(Data &toSet){
    this->data = toSet;
}
Data Presentation::getData(){return this->data;}


void Presentation::setHorario(Horario &toSet){
    this->horario = toSet;
}
Horario Presentation::getHorario(){return this->horario;}


void Presentation::setNumeroSala(NumeroSala &toSet){
    this->numero = toSet;
}
NumeroSala Presentation::getNumeroSala(){return this->numero;}


void Presentation::setPreco(Preco &toSet){
    this->preco = toSet;
}
Preco Presentation::getPreco(){return this->preco;}


void Presentation::setDisponibilidade(Disponibilidade &toSet){
    this->disponibilidade = toSet;
}
Disponibilidade Presentation::getDisponibilidade(){return this->disponibilidade;}



#endif