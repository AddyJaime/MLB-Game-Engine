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
}

void Engine::start()
{
  state = EngineState::RUNNING;
}

void Engine::stop()
{
  state = EngineState::STOPPED;
}

// devulde el estaod actual en el que se encuentra el engine
EngineState Engine::getState() const
{
  return state;
}