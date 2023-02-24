#include <iostream>
#include "funcs.h"

int main() {

  // Task A
  std::cout << "7x5 Box:\n" << box(7,5) << std::endl;
  std::cout << "3x4 Box:\n" << box(3,4) << std::endl;

  // Task B
  std::cout << "11x6 Checkerboard:\n" << checkerboard(11,6) << std::endl;
  std::cout << "5x3 Checkerboard:\n" << checkerboard(5,3) << std::endl;
  
  // Task C
  std::cout << "Cross (8):\n" << cross(8) << std::endl;
  std::cout << "Cross (5):\n" << cross(5) << std::endl;

  // Task D
  std::cout << "Lower triangle (6):\n" << lower(6) << std::endl;
  std::cout << "Lower triangle (3):\n" << lower(3) << std::endl;

  // Task E
  std::cout << "Upper triangle (6):\n" << upper(6) << std::endl;
  std::cout << "Upper triangle (3):\n" << upper(3) << std::endl;

  // Task F
  std::cout << "12x5 Trapezoid:\n" << trapezoid(12,5) << std::endl;
  std::cout << "5x2 Trapezoid:\n" << trapezoid(5,2) << std::endl;
  std::cout << "12x7 Trapezoid:\n" << trapezoid(12,7) << std::endl;
  std::cout << "7x4 Trapezoid:\n" << trapezoid(7,4) << std::endl;

  // Task G
  std::cout << "16x11 Checkerboard-3x3:\n" << checkerboard3x3(16,11) << std::endl;
  std::cout << "7x9 Checkerboard-3x3:\n" << checkerboard3x3(7,9) << std::endl;
  
  return 0;
}
