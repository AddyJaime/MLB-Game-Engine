#ifndef GAMERULES_H
#define GAMERULES_H

#include "../game/GameState.h"

class GameRules
{
  public:
  GameRules();

  // set the starting inning when the game begins
void initializeInning(GameState& state);

// sets the game to start in the top half of the inning El juego siempre empieza conTop of the 1stVisitante batea
void setInningHalfTop(GameState& state);

// resets outs to zero
void resetOuts(GameState& state);

// away team bats first
void setBattingSideAway(GameState& state);

// clears home team score
void resetHomeScore(GameState& state);

// clears away team score
void resetAwayScore(GameState& state);

// marks game as active
void setGameInProgress(GameState& state);

};

#endif