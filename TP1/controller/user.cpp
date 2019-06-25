#include "user.hpp"
#include "Home.hpp"
#include "../persistence/user.hpp"
#include "../persistence/card.hpp"

void UserController::POST_signup(std::string *params){
  // variavel para redirecionar
  HomeView* newView = HomeView::HomeViewCreate();
  bool error = false;

  // Tenta salvar dados
  UserPer* u = UserPer::criar();
  CardPer* card = CardPer::criar();
  User newUser;
  Card newCard;

  // Salvando dominios do usuario
  Cpf c;
  Senha s;
  try{
    c.setValor(params[0]);
    s.setValor(params[1]);
  }
  catch(std::invalid_argument){
    newView->f_msg = "Erro na criacao do Usuario";
    error =true;
  }

  //Salcando dominio do cartao
  DataValidade dv;
  CodigoSeguranca cs;
  NumeroCartao Nc;
  try{
    dv.setValor(params[2]);
    cs.setValor(params[3]);
    Nc.setValor(params[4]);
  }
  catch(std::invalid_argument){
    newView->f_msg = "Erro na criacao do Cartão, cadastro cancelado";
    error =true;
  }
  if (!error){
    newUser.setCpf(c); newUser.setSenha(s);
    newCard.setDataValidade(dv);
    newCard.setCodigoSeguranca(cs);
    newCard.setNumeroCartao(Nc);

    u->addUser(newUser);
    card->addCard(newCard, newUser);

    newView->f_msg = "Usuario Cadastrado";
  }

  newView->render();
}

void UserController::POST_login(std::string params[2]){

  HomeView* newView = HomeView::HomeViewCreate();


  User newUser;
  User toConfirm;
  Cpf c;
  Senha s;
  
  try{
    c.setValor(params[0]);
    s.setValor(params[1]);
  }
  catch(std::invalid_argument){
    newView->f_msg = "Dados invalidos";
    newView->render();
    return;
  }
  newUser.setCpf(c); newUser.setSenha(s);

  UserPer* u = UserPer::criar();
  try{
    toConfirm = u->searchUser(c);
  }
  catch(std::invalid_argument){
    newView->f_msg = "Cadastro inexistente";
    newView->render();
    return;
  }

  if( toConfirm.getSenha().getValor() != s.getValor()){
    newView->f_msg = "Senha errada";
    newView->render();
    return;
  }

  current_user = newUser;
  GET_perfil();
}

void UserController::GET_perfil(){

  PerfilView *newView = PerfilView::getInstance(current_user);
  newView->render();
}

void UserController::POST_editar(std::string *params){
  PerfilView *newView = PerfilView::getInstance();
  PerfilView *createmsg = PerfilView::getInstance();

  User toEdit;

  toEdit = newView->getCurrentUser();

  try{
    toEdit.getSenha().setValor(params[0]);
    createmsg->f_msg = "Usuario atualizado";
  }
  catch(std::invalid_argument){
    createmsg->f_msg = "Erro na atualização";
  }
}
