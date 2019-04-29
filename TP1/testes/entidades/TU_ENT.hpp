#ifndef TESTE_UNIDADE_ENT_H
#define TESTE_UNIDADE_ENT_H

#include "../testes.hpp"

/**
 * @brief Classe feita para executar os testes de unidade da Entidade Ticket
 * 
 */
class TUTicket{
  private:
    Ticket testando;        /// Instancia da classe a ser testada
    Testes estado;          /// Salva o estado do teste e os logs dos possiveis erros

    /**
     * @brief Tenta efetivar um CodigoIngresso válido da instancia testando. Caso não for
     * possivel fazer o perpetuação do objeto passado na instancia de Ticket, são salvos os
     * logs dos erros. 
     * 
     * @param valid: objeto a ser feita a tentativa de efetivamento.
     */
    void setCodigoValido(CodigoIngresso &valid);
  public:
    /**
     * @brief Executa os testes criados para esse teste de unidade. Testa o efetivamento de objetos validos
     * de todos seus atributos.
     */
    void runTestes();
};

class TUCreditCard{
  private:
    Card testando;    /// Instancia da classe a ser testada
    Testes estado;    /// Salva o estado do teste e os logs dos possiveis erros
    void setDataValida(DataValidade &valid);
    void setCodigoValido(CodigoSeguranca &valid);
    void setNumeroCartao(NumeroCartao &valid);
  public:
  /**
     * @brief Executa os testes criados para esse teste de unidade. Testa o efetivamento de objetos validos
     * de todos seus atributos.
     */
    void runTestes();
};

class TUPresentation{
  private:
  Presentation testando;  /// Instancia da classe a ser testada
  Testes estado;          /// Salva o estado do teste e os logs dos possiveis erros
  void testeDataValida(Data& valid);
  void testeCodigoApresentacaoValida(CodigoApresentacao& valid);
  void testeHorarioValida(Horario& valid);
  void testePrecoValida(Preco& valid);
  void testeNumeroSalaValida(NumeroSala& valid);
  void testeDisponibilidadeValida(Disponibilidade& valid);
  public:
  /**
   * @brief Executa os testes criados para esse teste de unidade. Testa o efetivamento de objetos validos
   * de todos seus atributos.
   */
  void runTestes();
};

class TUEvent{
  private:
  Event testando;  /// Instancia da classe a ser testada
  Testes estado;          /// Salva o estado do teste e os logs dos possiveis erros
  void testeFaixaValida(Faixa& valid);
  void testeClasseValida(Classe& valid);
  void testeEstadoValida(Estado& valid);
  void testeCidadeValida(Cidade& valid);
  void testeNameValida(Name& valid);
  void testeCodigoEventoValida(CodigoEvento& valid);
  public:
  /**
   * @brief Executa os testes criados para esse teste de unidade. Testa o efetivamento de objetos validos
   * de todos seus atributos.
   */
  void runTestes();
};


#endif