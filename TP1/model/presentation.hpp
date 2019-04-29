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
        
        void setCodigoApresentacao(CodigoApresentacao &toSet){this->codigo = toSet;}
        CodigoApresentacao getCodigoApresentacao(){return this->codigo;}

        void setData(Data &toSet){this->data = toSet;}
        Data getData(){return this->data;}


        void setHorario(Horario &toSet){this->horario = toSet;}
        Horario getHorario(){return this->horario;}


        void setNumeroSala(NumeroSala &toSet){this->numero = toSet;}
        NumeroSala getNumeroSala(){return this->numero;}


        void setPreco(Preco &toSet){this->preco = toSet;}
        Preco getPreco(){return this->preco;}


        void setDisponibilidade(Disponibilidade &toSet){this->disponibilidade = toSet;}
        Disponibilidade getDisponibilidade(){return this->disponibilidade;}

};

#endif