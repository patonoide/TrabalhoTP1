#ifndef DOM_CREDITCARD_H
#define DOM_CREDITCARD_H

#include "abstract_DOM.hpp"


/**
 * @brief Classe representante do Dominio data de validade
 */
class DataValidade: public Abstracts::Dominio{
  protected:
    string mes;                ///< Mês correspondente ao atributo primário (valor)
    string ano;                ///< Ano correspondente ao atributo primário (valor
    void validarValor(string); ///< Verifica se a string passada é válida, devolvendo erros caso não seja
  public:
    static const string classname;
    void setValor(string);     ///< Valida e posteriormente efetiva valor da string passada, caso seja válida, e retorna erro caso contrário 
    string getValor();         ///< Retorna atributo "valor" da instancia
    string getMes();           ///< Retorna atributo mês da instancia
    string getAno();           ///< Retorna atributo ano da instancia
};

/**
 * @brief Classe representante do Dominio codigo de validade
 */
class CodigoSeguranca : public Abstracts::Codigo{
  public:
    static const string classname;
    /**
     * @brief Constrói uma nova instacia do Codigo Seguranca, 
     * com o tamanho do codigo sendo como 3. 
     */
    CodigoSeguranca(){
      TAMANHO = 3;
    }
};


class NumeroCartao : public Abstracts::Dominio{
  protected:
    void validarValor(string);     ///< Verifica se a string passada é válida, devolvendo erros caso não seja
  public:
    static const string classname;
    void setValor(string);         ///< Valida e posteriormente efetiva valor da string passada, caso seja válida, e retorna erro caso contrário 
    string getValor();             ///< Retorna atributo "valor" da instancia
};


#endif