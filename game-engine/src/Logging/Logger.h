#ifndef LOGGER_H
#define LOGGER_H

#include <string>

class Logger{
  public:
  // std::string tipo de dato, message nombre de la varibale & = no has una copia del texto pasa el orginal, cosnt prometo no modifica el msj
  void logEngine(const std::string& message);
};

#endif