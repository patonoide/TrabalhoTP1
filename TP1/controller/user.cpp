#include "user.hpp"
#include "Home.hpp"


void UserController::POST_signup(std::string inf[5]){
  // Tenta salvar dados


  HomeView* newView = HomeView::HomeViewCreate();
  newView->f_msg = "Deu bom";
  newView->render();
}

void UserController::POST_login(std::string params[2]){
  User newUser;

  // stub:
    Cpf c;c.setValor("03341966129");
    Senha s;s.setValor("AbcDe1");
    newUser.setCpf(c); newUser.setSenha(s);
  // EndStub

  current_user = newUser;
  std::string msg = "Logo";
  GET_perfil();
}

void UserController::GET_perfil(){


  PerfilView *newView = PerfilView::getInstance(current_user);
  newView->render();
}

void UserController::POST_editar(std::string *params){


  PerfilView *createmsg = PerfilView::getInstance();
  createmsg->f_msg = "Criou";
}
