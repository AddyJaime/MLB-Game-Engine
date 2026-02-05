
#ifndef GAMELOOP_H
#define GAMELOOP_H
#include "TickSystem.h"
#include "../core/EngineState.h"


class GameLoop{

public:
GameLoop();
// esta funcion recibe el estado del engine, decide si el loop corre o no 
 void startLoop(EngineState& state);

 void stopLoop();


private:
TickSystem tickSystem;

};
#endif 