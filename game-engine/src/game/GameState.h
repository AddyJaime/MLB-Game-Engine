#ifndef GAMESTATE_H
#define GAMESTATE_H

#include "../game/GameEngineState.h"

class GameState
{
  public:
  GameState();

  private:
  // en que inning estamos 
  int inning;

  // alta o baja?
  // valor actual dentro de inninghalft top or bottom lo mismo para todo lo otro
  InningHalft inningHalft;

  // cuantos outs hay
  int outs;
  
  // quien esta bateando
  BattingSide battingSide;

  int homeScore;
  int awayScore;
  
  // el juego sigue o termino
  GameStatus gameStatus;

};

#endif