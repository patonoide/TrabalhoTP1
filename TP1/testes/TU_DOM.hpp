#ifndef TESTE_UNIDADE_H
#define TESTE_UNIDADE_H
#include "testes.hpp"

/// Classe para Teste de Unidade dos CodigoIngresso;
class TUCodigoIngresso{
    private:
        Testes estado;
        void SetValorInvalido(string codInvalido);
        void SetValorValido(string codValido);
    public:
        void runTestes();
};

/// Classe para Teste de Unidade dos CodigoSeguranca;
class TUCodigoSeguranca{
    private:
        Testes estado;
        void SetValorInvalido(string codInvalido);
        void SetValorValido(string codValido);
    public:
        void runTestes();
};

/// Classe para Teste de Unidade dos DataValidade;
class TUDataValidade{
    private:
        Testes estado;
        void SetValorInvalido(string codInvalido);
        void SetValorValido(string codValido);
        void GetMesAno(string valorValido);
    public:
        void runTestes();
};

/// Classe para Teste de Unidade dos CodigoEvento;
class TUNumeroCartao{
    private:
        Testes estado;
        void SetValorInvalido(string codInvalido);
        void SetValorValido(string codValido);
    public:
        void runTestes();
};

class TUCodigoApresentacao{
    private:
        Testes estado;
        void SetValorInvalido(string codInvalido);
        void SetValorValido(string codValido);
    public:
        void runTestes();
};

#endif