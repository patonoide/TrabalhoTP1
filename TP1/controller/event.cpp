#include "event.hpp"
#include "../persistence/event.hpp"
#include "../view/user/perfil.hpp"
void EventController::GET_index(){
  //! Pegar do BD lista de eventos
  std::list <Event> eventos;

  EventoPer* pers = EventoPer::criar();
  eventos = pers->listEvents();

  EventListView newView(eventos);
  newView.render();
}

void EventController::GET_create(){
  EventCreateView newView;
  newView.render();
}

void EventController::POST_create(std::string *params){
  EventoPer *evPer = EventoPer::criar();
  PerfilView *createmsg = PerfilView::getInstance();
  Event newEvent;
  bool error = false;

  Faixa f; Classe c; Estado e;Cidade ci; Name n; CodigoEvento ce;

  try
  {
    f.setValor(params[0]);c.setValor(params[1]);e.setValor(params[2]);
    ci.setValor(params[3]);n.setValor(params[4]);ce.setValor(params[5]);
  }
  catch(std::invalid_argument)
  {
    createmsg->f_msg = "Erro com argumentos passados";
    error = true;
  }
  newEvent.setFaixa(f);newEvent.setClasse(c);newEvent.setEstado(e);
  newEvent.setCidade(ci);newEvent.setName(n);newEvent.setCodigoEvento(ce); 

  if (!error){
    evPer->addEvent(newEvent,createmsg->getCurrentUser());
    createmsg->f_msg = "Evento criado com sucesso";
  }

}

void EventController::POST_search(std::string* params){
  EventoPer *evPer = EventoPer::criar();
  std::list <Event> eventos;
  Estado e; Cidade c;
  try
  {
    c.setValor(params[0]);e.setValor(params[1]);
    eventos = evPer->searchEventwith(e,c);
  }
  catch(std::invalid_argument)
  {
    printw("Pesquisa deu errado");
    refresh();
    return;
  }
  


  EventSearchView n(eventos);
  n.render();
}