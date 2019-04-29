#include "TU_ENT.hpp"

void TUEvent::testeFaixaValida(Faixa &valid){
    try{
        this->testando.setFaixa(valid);
        this->estado.adicionaSucesso();
    }
    catch(std::invalid_argument){
        this->estado.adicionaErro("TUEvent: setFaixaValido retornou erro.");
    }

    if(this->testando.getFaixa().getValor() != valid.getValor()){
        this->estado.adicionaErro("TUEvent: setFaixaValido não efetivou valor");
    }
    else{
        this->estado.adicionaSucesso();
    }
}

void TUEvent::testeClasseValida(Classe &valid){
    try{
        this->testando.setClasse(valid);
        this->estado.adicionaSucesso();
    }
    catch(std::invalid_argument){
        this->estado.adicionaErro("TUEvent: setClasseValido retornou erro.");
    }

    if(this->testando.getClasse().getValor() != valid.getValor()){
        this->estado.adicionaErro("TUEvent: setClasseValido não efetivou valor");
    }
    else{
        this->estado.adicionaSucesso();
    }
}

void TUEvent::testeEstadoValida(Estado &valid){
    try{
        this->testando.setEstado(valid);
        this->estado.adicionaSucesso();
    }
    catch(std::invalid_argument){
        this->estado.adicionaErro("TUEvent: setEstadoValido retornou erro.");
    }

    if(this->testando.getEstado().getValor() != valid.getValor()){
        this->estado.adicionaErro("TUEvent: setEstadoValido não efetivou valor");
    }
    else{
        this->estado.adicionaSucesso();
    }
}

void TUEvent::testeCidadeValida(Cidade &valid){
    try{
        this->testando.setCidade(valid);
        this->estado.adicionaSucesso();
    }
    catch(std::invalid_argument){
        this->estado.adicionaErro("TUEvent: setCidadeValido retornou erro.");
    }

    if(this->testando.getCidade().getValor() != valid.getValor()){
        this->estado.adicionaErro("TUEvent: setCidadeValido não efetivou valor");
    }
    else{
        this->estado.adicionaSucesso();
    }
}

void TUEvent::testeNameValida(Name &valid){
    try{
        this->testando.setName(valid);
        this->estado.adicionaSucesso();
    }
    catch(std::invalid_argument){
        this->estado.adicionaErro("TUEvent: setNameValido retornou erro.");
    }

    if(this->testando.getName().getValor() != valid.getValor()){
        this->estado.adicionaErro("TUEvent: setNameValido não efetivou valor");
    }
    else{
        this->estado.adicionaSucesso();
    }
}

void TUEvent::testeCodigoEventoValida(CodigoEvento &valid){
    try{
        this->testando.setCodigoEvento(valid);
        this->estado.adicionaSucesso();
    }
    catch(std::invalid_argument){
        this->estado.adicionaErro("TUEvent: setCodigoEventoValido retornou erro.");
    }

    if(this->testando.getCodigoEvento().getValor() != valid.getValor()){
        this->estado.adicionaErro("TUEvent: setCodigoEventoValido não efetivou valor");
    }
    else{
        this->estado.adicionaSucesso();
    }
}

void TUEvent::runTestes(){
    Faixa faixa;
    Classe classe;
    Cidade cidade;
    Estado estado;
    Name name;
    CodigoEvento codigo;

    faixa.setValor("L");
    classe.setValor("0");
    cidade.setValor("RS");
    estado.setValor("RS");
    name.setValor("Thiago");
    codigo.setValor("111");

    this->testeFaixaValida(faixa);
    this->testeClasseValida(classe);
    this->testeCidadeValida(cidade);
    this->testeEstadoValida(estado);
    this->testeNameValida(name);
    this->testeCodigoEventoValida(codigo);

    std::cout << "Foram feitos " << this->estado.totalTestes() << " testes para Event";
    this->estado.logAllErros();
    
}