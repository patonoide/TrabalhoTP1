#include "testes.hpp"

int main(int argc, char const *argv[]){

    // Testes da entidade ticket
    try{
        Testes::CodigoApresentacao_SetComValorErrado();
    }
    catch(invalid_argument){
        cout << "Não passou no teste: CodigoApresentacao_SetComValorErrado\n";
    }
    // Fim dos testes da entidade ticket

    cout << "Fim dos testes\n";
    return 0;
}
