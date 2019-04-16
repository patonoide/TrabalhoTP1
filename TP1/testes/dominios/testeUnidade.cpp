#include "TU_DOM.hpp"


template<class T> void TesteUnidadeDOM::SetValorInvalido(string codInvalido){
    T Testando;

    // Testando se o metodo retorna erro corretamente
    try{
        Testando.setValor(codInvalido);
        this->estado.adicionaErro(Testando.classname+": Valor supostamente invalido \""+codInvalido+"\" não retornou erro");
    }
    catch(std::invalid_argument){
        this->estado.adicionaSucesso();
    }
    // Testando se o Valor não foi setado como esperado
    this->estado.stringIsNotEq(Testando.getValor(), codInvalido, Testando.classname+": Valor supostamente inválido \""+codInvalido+"\" foi setado");
}

template<class T> void TesteUnidadeDOM::SetValorValido(string codValido){
    T Testando;
    // Testando se o metodo não retorna erro com Valor valido
    try{
        Testando.setValor(codValido);
        this->estado.adicionaSucesso();
    }
    catch(std::invalid_argument){
        this->estado.adicionaErro(Testando.classname+": Código supostamente válido \""+codValido+"\" retornou erro");
    }

    // Testando se o Valor foi setado como esperado
    this->estado.stringIsEq(Testando.getValor(), codValido, Testando.classname+": Código supostamente válido  \""+codValido+"\" não está sendo efetivado");
}

template void TesteUnidadeDOM::SetValorInvalido<CodigoIngresso>(string codInvalido);
template void TesteUnidadeDOM::SetValorValido<CodigoIngresso>(string codInvalido);

template void TesteUnidadeDOM::SetValorInvalido<CodigoApresentacao>(string codInvalido);
template void TesteUnidadeDOM::SetValorValido<CodigoApresentacao>(string codInvalido);

template void TesteUnidadeDOM::SetValorInvalido<CodigoSeguranca>(string codInvalido);
template void TesteUnidadeDOM::SetValorValido<CodigoSeguranca>(string codInvalido);

template void TesteUnidadeDOM::SetValorInvalido<DataValidade>(string codInvalido);
template void TesteUnidadeDOM::SetValorValido<DataValidade>(string codInvalido);

template void TesteUnidadeDOM::SetValorInvalido<NumeroCartao>(string codInvalido);
template void TesteUnidadeDOM::SetValorValido<NumeroCartao>(string codInvalido);

template void TesteUnidadeDOM::SetValorInvalido<Faixa>(string codInvalido);
template void TesteUnidadeDOM::SetValorValido<Faixa>(string codInvalido);

template void TesteUnidadeDOM::SetValorInvalido<Senha>(string codInvalido);
template void TesteUnidadeDOM::SetValorValido<Senha>(string codInvalido);
