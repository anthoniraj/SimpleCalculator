#include "mylibrary.h"
#include "calculator.h"

/*
    Author      : Anthoniraj Amalanathan
    Created on  : 2020-03-28 10:31:55
    Filename    : app.cpp
    Description : Demo C++ Application for Simple Calculator
*/
int main()
{
  std::string input;
  Calculator calc;
  std::cout << "The Tiny calculator for C++ Application Demo" << "\n"
            << "Type help for list of functions" << "\n"
            << "Type quit to exit" << "\n"
            << "Developer: Anthoniraj Amalanathan" << "\n";
  do {
    std::cout << ">>>";
    getline(std::cin, input);
    if (findSymbol(input, '+')) {
      std::cout << calc.addition(input) << "\n";
    }else if (findSymbol(input, '-')) {
      std::cout << calc.subtraction(input) << "\n";
    }else if (findSymbol(input, '*')) {
      std::cout << calc.multiplication(input) << "\n";
    }else if (findSymbol(input, '/')) {
      std::cout << calc.division(input) << "\n";
    }else if (findSymbol(input, '!')) {
      std::cout << calc.doFactorial(input) << "\n";
    }else if (input.compare("help") == 0) {
      std::cout << "Available Operations" << "\n"
                << "Addition: 10.0 + 20.5" << "\n"
                << "Subtraction: 10.0 - 20.5" << "\n"
                << "Division: 10.0 / 20.5" << "\n"
                << "Factorial: 5! (must be an integer)" << "\n";
    }else {
      if (input.compare("quit") != 0)
        std::cout << "Please use valid syntax eg: 10 + 20" << "\n";
    }
  }while (input.compare("quit") != 0);
    
  return 0;
}