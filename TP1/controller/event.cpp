#include "event.hpp"
#include "../persistence/event.hpp"

void EventController::GET_index(){
  //! Pegar do BD lista de eventos
  std::list <Event> eventos;

  EventoPer* pers = EventoPer::criar();

  pers->listEvent();
  /// Stub:
    Faixa faixa;
    Classe classe;
    Cidade cidade;
    Estado estado;
    Name name;
    CodigoEvento codigo;

    faixa.setValor("L");
    classe.setValor("0");
    cidade.setValor("RS");
    estado.setValor("RS");
    name.setValor("Thiago");
    codigo.setValor("111");

    Event NewEvent;
    NewEvent.setCidade(cidade);
    NewEvent.setClasse(classe);
    NewEvent.setCodigoEvento(codigo);
    NewEvent.setEstado(estado);
    NewEvent.setFaixa(faixa);
    NewEvent.setName(name);

    eventos.push_back(NewEvent);
  /// Fim stub

  EventListView newView(eventos);
  newView.render();
}

void EventController::GET_create(){
  EventCreateView newView;
  newView.render();
}

void EventController::POST_create(){


  PerfilView *createmsg = PerfilView::getInstance();
  createmsg->f_msg = "KKKKKKKK izi clap";
}

void EventController::POST_search(std::string* params){
  std::list <Event> eventos;
  
  EventSearchView n(eventos);
  n.render();
}