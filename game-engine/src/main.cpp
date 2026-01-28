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

// scope resolution operator : significa este valor vive dentro de esto
engineState = EngineState::STARTING;
cout << "Engine starting...";
cout << "[ENGINE] State changed: STARTING\n";

engineState = EngineState::RUNNING;
cout << "[ENGINE] State changed: RUNNING\n";

while (engineState == EngineState::RUNNING)
{
  tickCount++;
  cout << "[TICK] Tick #" << tickCount << " processed\n";

  if (tickCount >= 5)
  {
   engineState = EngineState::STOPPED;  
  }

}
cout << "[ENGINE] Engine stopped cleanly\n";


}