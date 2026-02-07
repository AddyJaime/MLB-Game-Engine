#ifndef GAMEENGINESTATE_H
#define GAMEENGINESTATE_H

// el juego sigue i ya termino
enum class GameStatus
{
  IN_PROGRESS,
  FINISHED,
};

// alta o baja del inning?
// top:visitantes batean
// bottom: baja locales batean
// 1st inning
//   ├─ TOP 1 (visitante batea)
//   └─ BOTTOM 1 (local batea)
// “Top of the 4th”
enum class InningHalft
{
  TOP,
  BOTTOM,
};

// quien esta bateado
// home equipo local 
// away euqipo viisitante
enum class BattingSide
{
  HOME,
  AWAY,
};


#endif