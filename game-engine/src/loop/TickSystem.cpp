#include "../loop/TickSystem.h"

// esto es lo que hace el construtor cuando se llama
TickSystem::TickSystem()
{
  count = 0;
}


void TickSystem::advanceTick()
{
 count++;

}