#ifndef DOM_CREDITCARD_H
#define DOM_CREDITCARD_H

#include "abstract_DOM.hpp"


/**
 * @brief Classe representante do Dominio data de validade
 */
class DataValidade{
  private:
    string data;              ///< Atributo primário
    string mes;               ///< Mês correspondente da data
    string ano;               ///< Ano correspondente da data
    void validarData(string); ///< Verifica se a string passada é válida, devolvendo erros caso não seja
  public:
    void setData(string);     ///< Tenta validar e posteriormente efetivar valor da string passada 
    string getData();         ///< Retorna atributo data da instancia
    string getMes();          ///< Retorna atributo mês da instancia
    string getAno();          ///< Retorna atributo ano da instancia
};

/**
 * @brief Classe representante do Dominio codigo de validade
 */
class CodigoSeguranca : public Abstracts::Codigo{
  public:
    /**
     * @brief Constrói uma nova instacia do Codigo Seguranca, 
     * com o tamanho do codigo sendo como 3. 
     * 
     */
    CodigoSeguranca(){
      TAMANHO = 3;
    }
};


class NumeroCartao{
  private:
    string numero;
  public:
    void setNumero(string);// throw(invalid_argument);
    string getNumero();
};


#endif