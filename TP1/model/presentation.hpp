#ifndef ENTIDADES_PRESENTATION_H
#define ENTIDADES_PRESENTATION_H

#include "../dominios/presentation_DOM.hpp"
#include "model.hpp"

/**
 * @brief Classe Representante da entidade Apresentação
 * 
 *  Possui atributos:
 *  CodigoApresentacao, Data, Preco, NumeroSala, Disponibilidade
 * 
 *  O salvamento dos atributos e retornos de seus valores são feitos através de set
 */
class Presentation: public Model{
    private:
        CodigoApresentacao codigo;
        Data data;
        Horario horario;
        Preco preco;
        NumeroSala numero;
        Disponibilidade disponibilidade;
    public:
        
        /// Recebe uma instancia de CodigoApresentacao e salva no seu respectivo atibuto da classe
        void setCodigoApresentacao(CodigoApresentacao &toSet){this->codigo = toSet;}
        /// Retorna atributo CodigoApresentacao
        CodigoApresentacao getCodigoApresentacao(){return this->codigo;}

        /// Recebe uma instancia de Data e salva no seu respectivo atibuto da classe
        void setData(Data &toSet){this->data = toSet;}
        /// Retorna atributo Data
        Data getData(){return this->data;}

        /// Recebe uma instancia de Horario e salva no seu respectivo atibuto da classe
        void setHorario(Horario &toSet){this->horario = toSet;}
        /// Retorna atributo Horario
        Horario getHorario(){return this->horario;}

        /// Recebe uma instancia de NumeroSala e salva no seu respectivo atibuto da classe
        void setNumeroSala(NumeroSala &toSet){this->numero = toSet;}
        /// Retorna atributo NumeroSala
        NumeroSala getNumeroSala(){return this->numero;}

        /// Recebe uma instancia de Preco e salva no seu respectivo atibuto da classe
        void setPreco(Preco &toSet){this->preco = toSet;}
        /// Retorna atributo Preco
        Preco getPreco(){return this->preco;}

        /// Recebe uma instancia de Disponibilidade e salva no seu respectivo atibuto da classe
        void setDisponibilidade(Disponibilidade &toSet){this->disponibilidade = toSet;}
        /// Retorna atributo Disponibilidade
        Disponibilidade getDisponibilidade(){return this->disponibilidade;}

};

#endif