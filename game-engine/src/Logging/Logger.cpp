//AQUI SE EJECUTA LOGICA
#include "Logger.h"
#include <iostream>
using namespace std;

void Logger::logEngine(const std::string& message)
{
 cout << "[ENGINE]" << message << endl;
}