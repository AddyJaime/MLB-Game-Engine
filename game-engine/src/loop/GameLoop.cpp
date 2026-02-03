#include "GameLoop.h"
#include "TickSystem.h"



// el ciclo que repite cosas, solo repite mientras este encendido
GameLoop::GameLoop()
{
  isRunning = false;
}

void GameLoop::startLoop()
{
  isRunning = true;
  int maxTicks = 10;
while (isRunning && maxTicks > 0)
{
tickSystem.advanceTick();

maxTicks++;
}
stopLoop();
}

void GameLoop::stopLoop()
{
  isRunning = false;


}