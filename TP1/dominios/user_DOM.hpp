#ifndef DOM_USER_H
#define DOM_USER_H

#include "abstract_DOM.hpp"
#include <iostream>

#include<string>   // Incluindo biblioteca para uso de string
#include <algorithm>
using std::string;
class Cpf : public Abstracts::Dominio {


private:
    string cpf;
    void validarValor(string);
public:
    static const string classname;
    string getValor();
    void setValor(string);



};
class Senha : public Abstracts::Dominio{

private:
    string senha;
    void validarValor(string);
public:
    static const string classname;
    string getValor();
    void setValor(string);



};




#endif
