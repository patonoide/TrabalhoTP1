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

class Data: public Abstracts::Codigo{
  private:
  public:
    void setValor(string);// throw(invalid_argument);
    string getValor();
};

class Horario{
  private:
    string horario;
  public:

};

class Preco{
  private:
    float preco;
  public:

};

class NumeroSala : public Abstracts::Codigo{
  private:
  public:
  void setNumero(int);// throw(invalid_argument);
  int getNumero();

};

class Disponibilidade{
  private:
    int disponibilidade;
  public:
  
};

#endif