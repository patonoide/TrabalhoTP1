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

#endif