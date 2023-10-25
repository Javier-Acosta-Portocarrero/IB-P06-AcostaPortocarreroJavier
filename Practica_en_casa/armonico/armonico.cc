/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  * @file armonico.cc
  * @author Javier Acosta Portocarrero alu0101660769@ull.edu.es
  * @date Oct 22 2023
  * @brief The program reads a number and then prints its armonic.
  */

#include <iostream>
#include <iomanip>

int main() {
  double numero{0};
  double resultado{0}; 
  std::cin >> numero;
  for (double y{1}; y <= numero; ++y) {
    resultado += 1 / y;
  }
  std::cout << std::fixed << std::setprecision(4) << resultado << std::endl;
  return 0;
}
  
  
