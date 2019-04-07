#ifndef TESTE_UNIDADE_H
#define TESTE_UNIDADE_H
#include "testes.hpp"

/// Classe para Teste de Unidade dos CodigoIngresso;
class TUCodigoIngresso{
    private:
        static void SetValorInvalido(Testes* t, string codInvalido);
        static void SetValorValido(Testes* t, string codValido);
    public:
        static void runTestes();
};

/// Classe para Teste de Unidade dos CodigoSeguranca;
class TUCodigoSeguranca{
    private:
        static void SetValorInvalido(Testes* t, string codInvalido);
        static void SetValorValido(Testes* t, string codValido);
    public:
        static void runTestes();
};

/// Classe para Teste de Unidade dos DataValidade;
class TUDataValidade{
    private:
        static void SetValorInvalido(Testes* t, string codInvalido);
        static void SetValorValido(Testes* t, string codValido);
        static void GetMesAno(Testes* t, string valorValido);
    public:
        static void runTestes();
};

/// Classe para Teste de Unidade dos CodigoEvento;
class TUNumeroCartao{
    private:
        static void SetValorInvalido(Testes* t, string codInvalido);
        static void SetValorValido(Testes* t, string codValido);
    public:
        static void runTestes();
};

class TUCodigoApresentacao{
    private:
        static void SetValorInvalido(Testes* t, string codInvalido);
        static void SetValorValido(Testes* t, string codValido);
    public:
        static void runTestes();
};

#endif