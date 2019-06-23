#include "user.hpp"
#include "Home.hpp"


void UserController::POST_signup(std::string inf[5]){
  // Tenta salvar dados

  
  std::string msg = "Deu bom se pá";
  HomeView newView(msg);
  newView.render();
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