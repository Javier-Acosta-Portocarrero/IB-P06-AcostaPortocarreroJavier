/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file intervalo.cc
  * @author Javier Acosta Portocarrero alu0101660769@ull.edu.es
  * @date Oct 22 2023
  * @brief The program reads two numbers, and prints all the int numbers between
  * them (the first number has to smaller than the second one).
  */

#include <iostream>

int main() {
  int numero1{0};
  int numero2{0};

  std::cin >> numero1 >> numero2;
  if (numero1 <= numero2) {
    while (numero1 <= numero2) {
      std::cout << numero1;
      if (numero2 == numero1) {
        break;
      }
      std::cout << ",";
      ++numero1;
    }
  }
  std::cout << std::endl;
  return 0;
}
