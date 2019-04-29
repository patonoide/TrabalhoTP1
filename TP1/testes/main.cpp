#include "dominios/TU_DOM.hpp"   //Header com testes
#include "entidades/TU_ENT.hpp"
#include<iostream>      // Notificações no console

int main(int argc, char const *argv[]){

    std::cout << "\n##### Inicio dos testes de Dominios #####\n";
    // Testes De Unidade dos dominios
    // Ticket
    TUCodigoIngresso codigoIng;
    codigoIng.runTestes();

    // Presentation
    TUCodigoApresentacao codigoPres;
    TUData data;
    TUHorario horario;
    TUNumeroSala numeroSala;
    TUDisponibilidade disp;
    TUPreco preco;
    preco.runTestes();
    disp.runTestes();
    numeroSala.runTestes();
    horario.runTestes();
    codigoPres.runTestes();
    data.runTestes();

    // Credit card
    TUCodigoSeguranca codigoSeg;
    TUDataValidade dataVal;
    TUNumeroCartao numeroCartao;
    numeroCartao.runTestes();
    dataVal.runTestes();
    codigoSeg.runTestes();

    // Event
    TUFaixa faixa;
    TUClasse classe;
    TUEstado estado;
    TUCidade cidade;
    TUName name;
    TUCodigoEvento codigoEvnt;
    codigoEvnt.runTestes();
    name.runTestes();
    cidade.runTestes();
    estado.runTestes();
    classe.runTestes();
    faixa.runTestes();

    // User
    TUSenha senha;
    TUCpf cpf;
    cpf.runTestes();
    senha.runTestes();


    /// Testes de Entidade /// 
    std::cout << "\n##### Inicio dos testes de Entidade #####\n";
    TUTicket ticket;
    TUPresentation presentation;
    TUCreditCard card;
    TUEvent event;
    TUUser user;
    user.runTestes();
    event.runTestes();
    ticket.runTestes();
    card.runTestes();
    presentation.runTestes();
    
    std::cout << "Fim dos testes\n";
    return 0;
}
