#include "Engine.h"

Engine::Engine()
{
    state = EngineState::STARTING;
    logger.logEngine("Engine Created");
}

void Engine::start()
{
    state = EngineState::RUNNING;
    logger.logEngine("Engine Running");
    gameLoop.startLoop(state);
}

void Engine::stop()
{
    state = EngineState::STOPPED;
    logger.logEngine("Engine Stopped");
}

EngineState Engine::getState() const
{
    return state;
}
