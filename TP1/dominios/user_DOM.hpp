#ifndef DOM_USER_H
#define DOM_USER_H


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
class Senha {

private:
    string senha;
    void validarSenha(string);
public:
    string getSenha();
    void setSenha(string);



};




#endif
