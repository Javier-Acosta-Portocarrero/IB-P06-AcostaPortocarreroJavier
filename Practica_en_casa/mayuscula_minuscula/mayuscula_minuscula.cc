/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file mayuscula_minuscula.cc
  * @author Javier Acosta Portocarrero alu0101660769@ull.edu.es
  * @date Oct 22 2023
  * @brief The program reads a capital letter and prints its lowercase and vice
  * versa.
  */

#include <iostream>

int main() {
  char letra_sin_cambiar{' '};
  char letra_cambiada{' '};
  int numero_asci_de_letra{0};

  std::cin >> letra_sin_cambiar;
  numero_asci_de_letra = static_cast<int>(letra_sin_cambiar);
  if (64 < numero_asci_de_letra && numero_asci_de_letra < 91) {
    numero_asci_de_letra += 32;
    letra_cambiada = static_cast<char>(numero_asci_de_letra);
    std::cout << letra_cambiada << std::endl; 
  }
  else {
    letra_cambiada = static_cast<char>(numero_asci_de_letra - 32);
    std::cout << letra_cambiada << std::endl; 
  }
  return 0;
}
