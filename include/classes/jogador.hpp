#include "classes/pokerExceptions.hpp"
#include "classes/mao.hpp"
#include "classes/pote.hpp"
#include "classes/mesa.hpp"
#include "enums/ordemSequencia.hpp"
#include "classes/util.hpp"

#include <map>
#include <vector>
#include <string>

#ifndef JOGADOR_H
#define JOGADOR_H 

namespace poker {

	class Jogador {

      protected:
          Mao* mao;
          Pote* pote;
          Mesa* mesa;
          unsigned int numeroFichas;
          std::string nome;
          std::string ultimaAcao;

      public:
          Jogador();
          Jogador(std::string nome, Pote* pote, Mesa* mesa);
          Jogador(std::string nome, int numeroFichas, Pote* pote, Mesa* mesa);

          void setMao(Mao* mao);
          Mao* getMao();
          void setNumeroFichas(int numeroFichas);
          unsigned int getNumeroFichas();
          std::string getNome();
          void setUltimaAcao(std::string ultimaAcao);
          std::string getUltimaAcao();

          void passarVez();
          void apostar(unsigned int valorAposta);
          void pagarAposta();
          void aumentarAposta(unsigned int valorNovaAposta);

          void realizarJogada(std::string opcaoSelecionada);

          void jogar(std::map<std::string, bool> opcoesJogador);

          std::map<std::string, int> analisarMao();
	};

}
#endif