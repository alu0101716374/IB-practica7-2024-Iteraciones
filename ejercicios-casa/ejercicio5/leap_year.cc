/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Kye Brandon Rogers
 * @date 2/11/24
 * @brief checks if a year was a leap year
 */

#include <iostream>

bool isLeapYear(int year) {
  if (year % 4 != 0) {
    return false;
  } else {
    if (year % 100 == 0 && year % 400 != 0) {
      return false;
    } else {
      return true;
    }
  }
}

int main() {
  int year{0};
  std::cin >> year;
  if (isLeapYear(year)) {
    std::cout << "YES\n";
  } else {
    std::cout << "NO\n";
  }
}
