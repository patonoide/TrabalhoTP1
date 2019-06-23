#include "user.hpp"
#include "Home.hpp"


void UserController::POST_signup(std::string inf[5]){
  // Tenta salvar dados

  
  std::string msg = "Deu bom se pá";
  HomeView newView(msg);
  newView.render();
}

void UserController::POST_login(std::string params[2]){


  std::string msg = "Logo";
  HomeView newView(msg);
  newView.render();
}