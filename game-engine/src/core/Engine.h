// Evita que este archivo se incluya más de una vez
// durante la compilación.
#ifndef ENGINE_H
#define ENGINE_H

// ===============================
// Engine.h
// ===============================
//
// ESTE ARCHIVO DEFINE QUÉ ES EL ENGINE.
//
// - Aquí NO se ejecuta lógica.
// - Aquí NO hay comportamiento.
// - Aquí SOLO se define:
//     • El nombre de la clase
//     • Qué puede hacer
//     • Qué datos internos tiene
//
// Regla mental:
// 👉 Los .h explican QUÉ existe.
// 👉 Los .cpp explican CÓMO funciona.
//
// Los .h ordenan la mente.
//

#include "EngineState.h" // El Engine necesita conocer su estado

// -------------------------------
// Definición de la clase Engine
// -------------------------------
// Esto es DEFINICIÓN, no ejecución.
class Engine
{
    // Esto es lo que otros pueden usar.
public:
    // Constructor
    // “Se crea un Engine”
    // Se crea un OBJETO de tipo Engine en memoria
    // se reserva espacio
    // nace una instancia
    Engine();

    // Arranca el engine
    // Cambia el estado y prepara el sistema.
    void start();

    // Detiene el engine
    // Cambia el estado a STOPPED.
    void stop();

//    esto es una promesa dejandole saber a los otros archivos que esta funcion o promesa existe y devolvera un Enginestate
    EngineState getState() const;

private:
    // Estado interno del engine
    // Es privado porque SOLO el Engine debe controlarlo.
    // EngineSt es un objecto especial que solo puede ser starting,running, stop.
    EngineState state;
};

#endif // ENGINE_H
