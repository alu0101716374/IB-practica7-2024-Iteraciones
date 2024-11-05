/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Kye Brandon Rogers
 * @date 2/11/24
 * @brief obtiene un numero n, y imprime hasta n digitos de la serie de fibonnaci
 */


#include <iostream>

void serieFibonacci(int input) {
  int previous{0}, temporary{0}, current{1};
  if (input == 1) {
    std::cout << "0\n";
  } else {
    std::cout << "0, ";
    for (int counter{2}; counter < input; counter++) {
      std::cout << current << ", ";
      temporary = current;
      current += previous;
      previous = temporary;
    }
    std::cout << current << "\n";
  }
}

int main() {
  int input{0};
  std::cin >> input;
  serieFibonacci(input);
  return 0;
}
