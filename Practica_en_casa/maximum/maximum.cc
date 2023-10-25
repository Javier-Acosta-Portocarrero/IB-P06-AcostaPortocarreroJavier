/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file maximum.cc
  * @author Javier Acosta Portocarrero alu0101660769@ull.edu.es
  * @date Oct 22 2023
  * @brief The program reads three numbers and prints the biggest one.
  * @bug There are no known bugs
  */

#include <iostream>

int ComparadorDeValores(int valor1, int valor2, int valor3);

int main() {
  int numero1{0};
  int numero2{0};
  int numero3{0};
  
  std::cin >> numero1 >> numero2 >> numero3;
  std::cout << ComparadorDeValores(numero1, numero2, numero3) << std::endl;
  return 0;
}

int ComparadorDeValores(int valor1, int valor2, int valor3) {
  int maximo{0};
  if (valor1 >= valor2 && valor1 >= valor3) {
    maximo = valor1;
  }
  else if (valor2 >= valor1 && valor2 >= valor3) {
    maximo = valor2;
  }
  else if (valor3 >= valor1 && valor3 >= valor1) {
    maximo = valor3;
  }
  return maximo;
}

