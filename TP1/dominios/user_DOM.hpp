#ifndef DOM_USER_H
#define DOM_USER_H

#include "abstract_DOM.hpp"
#include <iostream>
#include <cstring>
#include<string>   // Incluindo biblioteca para uso de string
using std::string;
class Cpf {


private:
    string cpf;
    void validarCpf(string);
public:
    string getCpf();
    void setCpf(string);



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
