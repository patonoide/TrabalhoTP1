#include "testes.hpp"

int main(int argc, char const *argv[])
{
    try{
        Testes::CodigoApresentacao_SetComValorErrado();
    }
    catch(invalid_argument){
        cout << "Não passou no teste: CodigoApresentacao_SetComValorErrado\n";
    }

    cout << "Fim dos testes\n";
    return 0;
}
