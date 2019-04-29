#include "presentation.hpp"

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

