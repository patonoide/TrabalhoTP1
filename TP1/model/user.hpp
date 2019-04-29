#ifndef ENTIDADES_USER_H
#define ENTIDADES_USER_H

#include "../dominios/user_DOM.hpp"
#include "model.hpp"

class User: public Model{
    private:
        Cpf cpf;
        Senha senha;
    public:
    inline void setCpf(Cpf &toSet);
    inline Cpf getCpf();

    inline void setSenha(Senha &toSet);
    inline Senha getSenha();
};
#endif