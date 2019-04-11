#ifndef TESTE_UNIDADE_H
#define TESTE_UNIDADE_H
#include "../testes.hpp"

/// Classe Base para testes de Unidade
class TesteUnidadeDOM{
    public:
        Testes estado;
        template<class T> void SetValorInvalido(string codInvalido);

        template<class T> void SetValorValido(string codValido);

        /// @brief Roda todos os testes de unidade, mostrando resultados no terminal
        virtual void runTestes()=0;
};

/// Classe para Teste de Unidade de CodigoIngresso;
class TUCodigoIngresso: public TesteUnidadeDOM{
    public:
        /// @brief Roda todos os testes de unidade, mostrando resultados no terminal
        void runTestes();
};

/// Classe para Teste de Unidade de CodigoSeguranca;
class TUCodigoSeguranca: public TesteUnidadeDOM{
    public:
        /// @brief Roda todos os testes de unidade, mostrando resultados no terminal
        void runTestes();
};

/// Classe para Teste de Unidade de DataValidade;
class TUDataValidade: public TesteUnidadeDOM{
    private:
        void GetMesAno(string valorValido);
    public:
        /// @brief Roda todos os testes de unidade, mostrando resultados no terminal
        void runTestes();
};

/// Classe para Teste de Unidade de NumeroCartao;
class TUNumeroCartao: public TesteUnidadeDOM{
    public:
        /// @brief Roda todos os testes de unidade, mostrando resultados no terminal
        void runTestes();
};

/// Classe para Teste de Unidade de CodigoApresentacao;
class TUCodigoApresentacao: public TesteUnidadeDOM{
    public:
        /// @brief Roda todos os testes de unidade, mostrando resultados no terminal
        void runTestes();
};

/// Classe para Teste de Unidade de Data;
class TUData: public TesteUnidadeDOM{
    public:
        /// @brief Roda todos os testes de unidade, mostrando resultados no terminal
        void runTestes();
};
/// Classe para Teste de Unidade de Faixa;
class TUFaixa: public TesteUnidadeDOM{
    public:
        /// @brief Roda todos os testes de unidade, mostrando resultados no terminal
        void runTestes();
};

#endif
