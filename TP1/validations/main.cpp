#include <iostream>
#include "validations.hpp"


int main()
{
    int num = 5;
    cout << "Teste checaNumero ";

    bool answer = checaNumero(num);
    if(answer == true){
        cout << " OK " << endl;
    }else{
        cout << " ERRO " << endl;
    }
    return 0;
}
