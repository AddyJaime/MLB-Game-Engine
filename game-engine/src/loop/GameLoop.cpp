#include "GameLoop.h"
#include "TickSystem.h"

// el ciclo que repite cosas, solo repite mientras este encendido
GameLoop::GameLoop()
{
}

void GameLoop::startLoop(EngineState& state )
{
  int maxTicks = 5;
while (state == EngineState::RUNNING && maxTicks > 0)
{
tickSystem.advanceTick();
maxTicks--;
}

}

