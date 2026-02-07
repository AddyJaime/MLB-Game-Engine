#include "../game/GameState.h"

GameState::GameState()
{
inning = 1;
inningHalft = InningHalft::TOP;
outs = 0;
battingSide = BattingSide::AWAY;
homeScore = 0;
awayScore = 0;
gameState =  GameStatus::IN_PROGRESS;

}