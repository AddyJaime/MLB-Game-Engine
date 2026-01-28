#include <iostream>
using namespace std;

// un enum es un tipo de dato 
// que define un conjunto fijo de valores osea que no cambia
enum class EngineState {

STARTING,
RUNNING,
STOPPED

};

int main ()
{
int tickCount = 0;
// engineState es la varibale de tipo EngineState y en la derehca guardo STARTING en engineState
EngineState engineState;

cout << "Starting Engine.....";

engineState = EngineState::STARTING;
engineState = EngineState::RUNNING;

while (engineState == EngineState::RUNNING)
{
  tickCount++;

  cout << "[ENGINE] Tick "<< tickCount << endl;

  if (tickCount >= 5)
  {
   engineState = EngineState::STOPPED;
  }
  
}

cout << "Engine Stopped.\n";


}