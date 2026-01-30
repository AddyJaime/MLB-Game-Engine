#include <iostream>
using namespace std;
#include "core/Engine.h"



int main ()
{

Engine engine;
engine.start();
engine.stop();
engine.getState();

// int tickCount = 0;
// while (engineState == EngineState::RUNNING)
// {
//   tickCount++;
//   cout << "[TICK] Tick #" << tickCount << " processed\n";

//   if (tickCount >= 5)
//   {
//    engineState = EngineState::STOPPED;  
//   }

// }
// cout << "[ENGINE] Engine stopped cleanly\n";
return 0;


}