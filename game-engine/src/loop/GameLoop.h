
#ifndef GAMELOOP_H
#define GAMELOOP_H
#include "TickSystem.h"


class GameLoop{

public:
GameLoop();
 void startLoop();

 void stopLoop();


private:
bool isRunning;
TickSystem tickSystem;

};
#endif 