// Evita que este archivo se incluya más de una vez
// durante la compilación.
#ifndef ENGINE_H
#define ENGINE_H
#include "EngineState.h" 
#include "../Logging/Logger.h"
#include "../loop/GameLoop.h"

class Engine
{
public:
    Engine();

    void start();
    void stop();

    EngineState getState() const;
 
private:
    EngineState state;
    GameLoop gameLoop;
    Logger logger;
};

#endif 
