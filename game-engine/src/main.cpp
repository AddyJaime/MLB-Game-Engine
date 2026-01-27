#include <iostream>
using namespace std;

int main ()
{
int tickCount = 0;
bool isRunning = true;

cout << "Starting Engine.....";

while (isRunning)
{
  tickCount++;

  cout << "[ENGINE] Tick "<< tickCount << endl;

  if (tickCount >= 5)
  {
    isRunning = false;
  }
  
}

cout << "Engine Stopped.\n";


}