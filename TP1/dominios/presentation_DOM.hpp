#ifndef DOM_PRESENTATION_H
#define DOM_PRESENTATION_H

#include "abstract_DOM.hpp"

class Abstracts::Codigo;
class Abstracts::Numero;

/**
 * @brief Classe representante do Dominio codigo de aprensentação
 */
class CodigoApresentacao : public Abstracts::Codigo{
  public:
    /**
     * @brief Constrói uma nova instacia do Codigo Seguranca, 
     * com o tamanho do codigo sendo como 4. 
     * 
     */
    CodigoApresentacao(){
      TAMANHO = 4;
    }
};

class Data{
  private:
    string data;
  public:
    void setData(string);// throw(invalid_argument);
    string getData();
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

class NumeroSala :public Abstracts::Numero{
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