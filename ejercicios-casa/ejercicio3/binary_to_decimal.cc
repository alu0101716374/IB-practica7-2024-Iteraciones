/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Kye Brandon Rogers
 * @date 2/11/24
 * @brief convierte de numeros binarios a decimal sin el uso de str, vectores y
 * array
 */

#include <iostream>

// checks whether the input given is binary or not
bool isBinary(unsigned long int input, int length) {
 int last_digit{0};
 for (int counter{0}; counter < length; counter++) {
    last_digit = input % 10;
    input /= 10;
    if (last_digit != 0 && last_digit != 1) {
      return false;
    } 
  }
  return true;
}

// calculates the amount of digits in the binary input
int binaryLength(unsigned long int input) {
  int length{0};
  if (input == 0) {
    return 1;
  }
  while (input > 0) {
    length++;
    input /= 10;
  }
  return length;
}

// converts from binary to decimal and prints the answer
void binaryToDecimal(unsigned long int input, int length) {
  int decimal{0}, last_digit{0};
  for (int counter{0}; counter < length; counter++) {
    int power_of_two{1};
    last_digit = input % 10;
    input /= 10;
    for (int power{0}; power < counter; power++) {
      power_of_two *= 2; 
    }
    decimal += last_digit * power_of_two;
  }
  std::cout << decimal << "\n";
}

int main() {
  int length{0}, decimal{0};
  unsigned long int input{0};
  std::cin >> input;
  length = binaryLength(input);
  if (isBinary(input, length)) { 
    binaryToDecimal(input, length);
  } else {
    std::cout << "Wrong Input\n";
  }
  return 0;
}

