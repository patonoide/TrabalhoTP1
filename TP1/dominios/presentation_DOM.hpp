#ifndef DOM_PRESENTATION_H
#define DOM_PRESENTATION_H

#include "abstract_DOM.hpp"


/**
 * @brief Classe representante do Dominio codigo de aprensentação
 */
class CodigoApresentacao : public Abstracts::Codigo{
  public:
    static const string classname;
    /**
     * @brief Constrói uma nova instacia do Codigo Seguranca, 
     * com o tamanho do codigo sendo como 4. 
     * 
     */
    CodigoApresentacao(){
      TAMANHO = 4;
    }
};

class Data: public Abstracts::Dominio{
  protected:
    void validarValor(string); ///< Verifica se a string passada é válida, devolvendo erros caso não seja
  public:
    static const string classname;
    void setValor(string);// throw(invalid_argument);
    string getValor();
};

class Horario: public Abstracts::Dominio{
  protected:
    void validarValor(string); ///< Verifica se a string passada é válida, devolvendo erros caso não seja
  public:
    static const string classname;
    void setValor(string);// throw(invalid_argument);
    string getValor();
};

class Preco: public Abstracts::Dominio{
   protected:
    void validarValor(string); ///< Verifica se a string passada é válida, devolvendo erros caso não seja
  public:
    static const string classname;
    void setValor(string);// throw(invalid_argument);
    string getValor();

};

class NumeroSala: public Abstracts::Dominio{
  protected:
    void validarValor(string); ///< Verifica se a string passada é válida, devolvendo erros caso não seja
  public:
    static const string classname;
    void setValor(string);// throw(invalid_argument);
    string getValor();

};

class Disponibilidade: public Abstracts::Dominio{
  protected:
    void validarValor(string); ///< Verifica se a string passada é válida, devolvendo erros caso não seja
  public:
    static const string classname;
    void setValor(string);// throw(invalid_argument);
    string getValor();
};

#endif