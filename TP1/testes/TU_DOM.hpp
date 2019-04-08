#ifndef TESTE_UNIDADE_H
#define TESTE_UNIDADE_H
#include "testes.hpp"

/// Classe para Teste de Unidade de CodigoIngresso;
class TUCodigoIngresso{
    private:
        Testes estado;
        void SetValorInvalido(string codInvalido);
        void SetValorValido(string codValido);
    public:
        /// @brief Roda todos os testes de unidade, mostrando resultados no terminal
        void runTestes();
};

/// Classe para Teste de Unidade de CodigoSeguranca;
class TUCodigoSeguranca{
    private:
        Testes estado;
        void SetValorInvalido(string codInvalido);
        void SetValorValido(string codValido);
    public:
        /// @brief Roda todos os testes de unidade, mostrando resultados no terminal
        void runTestes();
};

/// Classe para Teste de Unidade de DataValidade;
class TUDataValidade{
    private:
        Testes estado;
        void SetValorInvalido(string codInvalido);
        void SetValorValido(string codValido);
        void GetMesAno(string valorValido);
    public:
        /// @brief Roda todos os testes de unidade, mostrando resultados no terminal
        void runTestes();
};

/// Classe para Teste de Unidade de NumeroCartao;
class TUNumeroCartao{
    private:
        Testes estado;
        void SetValorInvalido(string codInvalido);
        void SetValorValido(string codValido);
    public:
        /// @brief Roda todos os testes de unidade, mostrando resultados no terminal
        void runTestes();
};

/// Classe para Teste de Unidade de CodigoApresentacao;
class TUCodigoApresentacao{
    private:
        Testes estado;
        void SetValorInvalido(string codInvalido);
        void SetValorValido(string codValido);
    public:
        
        /// @brief Roda todos os testes de unidade, mostrando resultados no terminal
        void runTestes();
};

#endif