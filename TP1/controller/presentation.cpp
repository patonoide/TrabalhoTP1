#include "presentation.hpp"

void PresentationController::GET_index(){
  //! Pegar do BD lista de eventos
  std::list <Presentation> pres;
  /// Stub:

  /// Fim stub

  PresentationListView newView(pres);
  newView.render();
}