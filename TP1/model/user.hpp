#ifndef ENTIDADES_USER_H
#define ENTIDADES_USER_H

#include "../dominios/user_DOM.hpp"
#include "model.hpp"

class User: public Model{
    private:
        Cpf cpf;
        Senha senha;
    public:
    inline void setCpf(Cpf &toSet){this->cpf = toSet;}
    inline Cpf getCpf(){return this->cpf;}

    inline void setSenha(Senha &toSet){this->senha = toSet;}
    inline Senha getSenha(){return this->senha;}
};
#endif