// Engine.cpp es donde el Engine CUMPLE lo que prometió en Engine.h.
// Engine.cpp
// Implementación de la clase Engine.
// Aquí se define CÓMO funciona el engine:
// - cómo arranca
// - cómo se detiene
// - cómo maneja su estado


// aqui cumplimos la promesa ejecutandola
#include "Engine.h"

Engine::Engine()
{
  // aqui arrancamos el engine de verdad
  state = EngineState::STARTING;
  logger.logEngine("Engine Started ");
}

void Engine::start()
{
  state = EngineState::RUNNING;
  gameLoop.startLoop();
  logger.logEngine("Engine Running");
}

void Engine::stop()
{
  state = EngineState::STOPPED;
  gameLoop.stopLoop();
  logger.logEngine("Engine Stopped");
}

// devulde el estaod actual en el que se encuentra el engine
EngineState Engine::getState() const
{
  return state;
}