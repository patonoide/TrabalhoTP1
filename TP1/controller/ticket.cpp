#include "ticket.hpp"

void TicketController::POST_create(std::string *params){
  

  PerfilView *createmsg = PerfilView::getInstance();
  createmsg->f_msg = "Criou";
}