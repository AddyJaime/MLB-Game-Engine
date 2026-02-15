#include "../game/GameState.h"

// el constructor aqui inicializa las variables
GameState::GameState()
{
inning = 1;
inningHalft = InningHalft::TOP;
outs = 0;
battingSide = BattingSide::AWAY;
homeScore = 0;
awayScore = 0;
gameStatus =  GameStatus::IN_PROGRESS;

}





// EngineState Engine::getState() const
// {
//   return state;
// }