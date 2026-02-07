
#ifndef GAMELOOP_H
#define GAMELOOP_H
#include "TickSystem.h"
#include "../core/EngineState.h"
#include "../Logging/Logger.h"
class GameLoop{
public:
GameLoop();
 void startLoop(EngineState& state);

 void stopLoop();


private:
TickSystem tickSystem;
Logger logger;
};
#endif 