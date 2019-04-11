#ifndef DOM_EVENT_H
#define DOM_EVENT_H

#include<string>   // Incluindo biblioteca para uso de string
using std::string;
#include <iostream>

class Name{

private:
    string name;
    void validarName(string);
public:
    string getName();
    void setName(string);

};

class Cidade{

private:
    string cidade;
    void validarCidade(string);
public:
    string getCidade();
    void setCidade(string);

};

class Estado{

private:
    string estado;
    void validarEstado(string);
public:
    string getEstado();
    void setEstado(string);

};
class Classe{

private:
    string classe;
    void validarClasse(string);
public:
    string getClasse();
    void setClasse(string);

};
class Faixa{

private:
    string faixa;
    void validarFaixa(string);
public:
    string getFaixa();
    void setFaixa(string);

};




#endif
