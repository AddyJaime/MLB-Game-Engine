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
public:
    // Constructor
    // Se llama cuando el Engine es creado.
    Engine();

    // Arranca el engine
    // Cambia el estado y prepara el sistema.
    void start();

    // Detiene el engine
    // Cambia el estado a STOPPED.
    void stop();

    // Devuelve el estado actual del engine
    // 'const' significa que esta función NO modifica nada.
    EngineState getState() const;

private:
    // Estado interno del engine
    // Es privado porque SOLO el Engine debe controlarlo.
    EngineState state;
};

#endif // ENGINE_H
