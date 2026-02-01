#include "loop/TickSystem.h"

TickSystem::TickSystem()
{
  count = 0;
}


void TickSystem::advanceTick()
{
 count++;
}