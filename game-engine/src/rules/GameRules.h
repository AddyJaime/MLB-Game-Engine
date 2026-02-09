#ifndef GAMERULES_H
#define GAMERULES_H

#include "../game/GameState.h"

class GameRule
{
  GameRule();

  // set the starting inning when the game begins
initializeInning();

// sets the game to start in the top half of the inning El juego siempre empieza conTop of the 1stVisitante batea
setInningHalfTop();

// resets outs to zero
resetOuts();

// away team bats first
setBattingSideAway();

// clears home team score
resetHomeScore();

// clears away team score
resetAwayScore();

// marks game as active
setGameInProgress();

  private:
  GameState gameState;
};

#endif