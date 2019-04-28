#include "TU_ENT.hpp"

void TUPresentation::testeDataValida(Data &valid){
    try{
        this->testando.setData(valid);
        this->estado.adicionaSucesso();
    }
    catch(std::invalid_argument){
        this->estado.adicionaErro("TUTicket: setCodigoValido retornou erro.");
    }

    if(this->testando.getData().getValor() != valid.getValor()){
        this->estado.adicionaErro("TUTicket: setCodigoValido não efetivou valor");
    }
    else{
        this->estado.adicionaSucesso();
    }
}

void TUPresentation::testeCodigoApresentacaoValida(CodigoApresentacao &valid){
    try{
        this->testando.setCodigoApresentacao(valid);
        this->estado.adicionaSucesso();
    }
    catch(std::invalid_argument){
        this->estado.adicionaErro("TUTicket: setCodigoValido retornou erro.");
    }

    if(this->testando.getCodigoApresentacao().getValor() != valid.getValor()){
        this->estado.adicionaErro("TUTicket: setCodigoValido não efetivou valor");
    }
    else{
        this->estado.adicionaSucesso();
    }
}

void TUPresentation::testeHorarioValida(Horario &valid){
    try{
        this->testando.setHorario(valid);
        this->estado.adicionaSucesso();
    }
    catch(std::invalid_argument){
        this->estado.adicionaErro("TUTicket: setCodigoValido retornou erro.");
    }

    if(this->testando.getHorario().getValor() != valid.getValor()){
        this->estado.adicionaErro("TUTicket: setCodigoValido não efetivou valor");
    }
    else{
        this->estado.adicionaSucesso();
    }
}

void TUPresentation::testePrecoValida(Preco &valid){
    try{
        this->testando.setPreco(valid);
        this->estado.adicionaSucesso();
    }
    catch(std::invalid_argument){
        this->estado.adicionaErro("TUTicket: setCodigoValido retornou erro.");
    }

    if(this->testando.getPreco().getValor() != valid.getValor()){
        this->estado.adicionaErro("TUTicket: setCodigoValido não efetivou valor");
    }
    else{
        this->estado.adicionaSucesso();
    }
}

void TUPresentation::testeNumeroSalaValida(NumeroSala &valid){
    try{
        this->testando.setNumeroSala(valid);
        this->estado.adicionaSucesso();
    }
    catch(std::invalid_argument){
        this->estado.adicionaErro("TUTicket: setCodigoValido retornou erro.");
    }

    if(this->testando.getNumeroSala().getValor() != valid.getValor()){
        this->estado.adicionaErro("TUTicket: setCodigoValido não efetivou valor");
    }
    else{
        this->estado.adicionaSucesso();
    }
}

void TUPresentation::testeDisponibilidadeValida(Disponibilidade &valid){
    try{
        this->testando.setDisponibilidade(valid);
        this->estado.adicionaSucesso();
    }
    catch(std::invalid_argument){
        this->estado.adicionaErro("TUTicket: setCodigoValido retornou erro.");
    }

    if(this->testando.getDisponibilidade().getValor() != valid.getValor()){
        this->estado.adicionaErro("TUTicket: setCodigoValido não efetivou valor");
    }
    else{
        this->estado.adicionaSucesso();
    }
}

void TUPresentation::runTestes(){
    Data data;
    CodigoApresentacao codigo;
    Horario horario;
    Preco preco;
    NumeroSala numero;
    Disponibilidade dispo;

    data.setValor("01/01/11");
    codigo.setValor("1111");
    preco.setValor("123,13");
    numero.setValor("10");
    horario.setValor("08:00");
    dispo.setValor("130");

    this->testeCodigoApresentacaoValida(codigo);
    this->testeDataValida(data);
    this->testeDisponibilidadeValida(dispo);
    this->testeHorarioValida(horario);
    this->testePrecoValida(preco);
    this->testeNumeroSalaValida(numero);


    std::cout << "Foram feitos " << this->estado.totalTestes() << " testes para Presentation";
    this->estado.logAllErros();
    
}