#ifndef DOM_TICKET_H
#define DOM_TICKET_H

#include "abstract_DOM.hpp"

/**
 * @brief Classe representante do Dominio codigo de Ingresso
 * 
 */
class CodigoIngresso : public Abstracts::Codigo{
  public:
    /**
     * @brief Constrói uma nova instacia do Codigo Seguranca, 
     * com o tamanho do codigo sendo como 5. 
     * 
     */
    CodigoIngresso(){
      TAMANHO = 5;
    }
};

#endif