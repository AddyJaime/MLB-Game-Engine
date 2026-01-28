// Engine.cpp es donde el Engine CUMPLE lo que prometió en Engine.h.
// Engine.cpp
// Implementación de la clase Engine.
// Aquí se define CÓMO funciona el engine:
// - cómo arranca
// - cómo se detiene
// - cómo maneja su estado
#include "Engine.h"

Engine::Engine()
{
  state = EngineState::STARTING;
}

void Engine::start()
{
  state = EngineState::RUNNING;
}

void Engine::stop()
{
  state = EngineState::STOPPED;
}

EngineState Engine::getState() const
{
  return state;
}