#ifndef GAMESTATE_H
#define GAMESTATE_H

#include "../game/GameEngineState.h"

class GameState
{
  public:
  GameState();

  // getters leen el estado no lo modifican 
  int getInning() const;

  InningHalft getInningHalf() const;

  int getOuts() const;

  BattingSide getBattingSide() const;

  int getHomeScore() const;

  int getAwayScore() const;

  GameStatus getGameStatus() const;

  // setters
void setInning(int newInning);

void setInningHalf(InningHalft newHalf);

void setOuts(int newOuts);

void setBattingSide(BattingSide newSide);

void setHomeScore(int newScore);

void setAwayScore(int newScore);

void setGameStatus(GameStatus newStatus) ;

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