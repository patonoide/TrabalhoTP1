#ifndef DOM_TICKET_H
#define DOM_TICKET_H


class Cpf {

private:
    string cpf;
    string validarCpf(string);
public:
    string getCpf();
    void setCpf(string);



};
class Senha {

private:
    string senha;
    string validarSenha(string);
public:
    string getSenha();
    void setSenha(string);



};




#endif
