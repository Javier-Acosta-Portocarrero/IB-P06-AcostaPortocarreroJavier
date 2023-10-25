/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file reloj.cc
  * @author Javier Acosta Portocarrero alu0101660769@ull.edu.es
  * @date Oct 22 2023
  * @brief The program reads the amount of hours, minuts and seconds of a clock and then
  * adds one second to the clock.
  */

#include <iostream>
#include <iomanip>

int main() {
  int horas{0};
  int minutos{0};
  int segundos{0};

  std::cin >> horas >> minutos >> segundos;
  segundos += 1;
  if (segundos == 60) {
    segundos = 0;
    minutos += 1; 
  if (minutos == 60) {
    minutos = 0;
    horas += 1;
  }
  if (horas == 24) {
    horas = 0;
  }
  }   
  std::cout << std::setfill('0') << std::setw(2) <<  horas << ":" << std::setw(2) << minutos << ":" << std::setw(2) <<  segundos << std::endl;
  return 0;
}
