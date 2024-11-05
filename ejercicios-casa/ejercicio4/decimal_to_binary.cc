/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Kye Brandon Rogers
 * @date 2/11/24
 * @brief converts decimal numbers to binary
 */

#include <iostream>

void decimalToBinary(int decimal) {
  int remainder{0}, bit_position{1}, binary{0};
  while (decimal > 0) {
    remainder = decimal % 2;
    decimal /= 2;
    binary += remainder * bit_position;
    bit_position *= 10;
  }
  std::cout << binary << "\n";
}

int main() {
  int decimal{0};
  std::cin >> decimal;
  decimalToBinary(decimal);
  return 0;
}

