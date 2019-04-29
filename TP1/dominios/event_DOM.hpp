#ifndef DOM_EVENT_H
#define DOM_EVENT_H

#include "abstract_DOM.hpp"
#include <string>   // Incluindo biblioteca para uso de string
using std::string;
#include <iostream>


class Name: public Abstracts::Dominio{

private:
    string name;
    void validarValor(string);
public:
    static const string classname;
    string getValor();
    void setValor(string);

};

class Cidade: public Abstracts::Dominio{

private:
    string cidade;
    void validarValor(string);
public:
    static const string classname;
    string getValor();
    void setValor(string);

};

class Estado: public Abstracts::Dominio{

private:
    string estado;
    void validarValor(string);
public:
    static const string classname;
    string getValor();
    void setValor(string);

};
class Classe: public Abstracts::Dominio{

private:
    string classe;
    void validarValor(string);
public:
    static const string classname;
    string getValor();
    void setValor(string);

};
class Faixa : public Abstracts::Dominio {

private:
    string faixa;
    void validarValor(string);
public:
    static const string classname;
    string getValor();
    void setValor(string);

};




#endif
