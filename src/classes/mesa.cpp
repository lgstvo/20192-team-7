#include "classes/mesa.hpp"
#include "classes/pokerExceptions.hpp"

using namespace poker;

Mesa::Mesa(){
    this->pote = Pote();
}

Mesa::Mesa(Pote pote){
    this->pote = pote;
}

void Mesa::addCartas(std::vector<Carta*> cartasMesa){
    if (cartasMesa.size() <= 5)
        this->cartasMesa.insert(this->cartasMesa.end(), cartasMesa.begin(), cartasMesa.end());
    else
        throw(PokerError("Mesa cheia!"));
}

void Mesa::setCartasMesa(std::vector<Carta*> cartasMesa){
    this->cartasMesa = cartasMesa;
}


std::vector<Carta*> Mesa::getCartasMesa(){
    return (this->cartasMesa);
}

void Mesa::setPoteApostaTotal(int valorTotal){
    this->pote.setValorTotal(valorTotal);
}

void Mesa::setPoteApostaAtual(int valorAtual){
    this->pote.setValorApostaAtual(valorAtual);
}

void Mesa::setPoteApostaAnterior(int valorAnterior){
    this->pote.setValorApostaAnterior(valorAnterior);
}

int Mesa::getPoteTotal(){
    return(this->pote.getValorTotal());
}

int Mesa::getPoteApostaAtual(){
    return(this->pote.getValorApostaAtual());
}

int Mesa::getPoteApostaAnterior(){
    return(this->pote.getValorApostaAnterior());
}
