#ifndef USER_PER_H
#define USER_PER_H
#include "persistence.hpp"
#include "../model/user.hpp"
#include <list>


class UserPer : Persistence {
private:
  
UserPer();
static int callback(void *, int, char **, char **);

public:

void cadastrar(User);
void excluir(User);
list<User> pesquisarporCPF(string);






};

#endif
