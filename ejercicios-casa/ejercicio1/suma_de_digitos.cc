/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Kye Brandon Rogers
 * @date  2/11/24
 * @brief lee un numero natural y imprime la suma de sus digitos
 */

#include <iostream>

int sumaDeDigitos(int input) {
  int suma{0};
  while (input > 0) {
    suma += input % 10;
    input /= 10;
  }
  return suma;
}

int main() {
  int input{0};
  std::cin >> input;
  std::cout << sumaDeDigitos(input) << "\n";
  return 0;
}
