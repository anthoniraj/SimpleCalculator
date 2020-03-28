#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <sstream>
#include <string>
#include <vector>
#include <exception>
/*
    Author      : Anthoniraj Amalanathan
    Created on  : 2020-03-28 10:35:55
    Filename    : calculator.h
    Description : Headerfile for simple calculator functions
*/

class Calculator {
 public:
  /* Member function template for addition */
  float addition(std::string input) {
    std::vector<std::string> arr = split(input, '+');
    return stof(rtrim(ltrim(arr.at(0)))) + stof(rtrim(ltrim(arr.at(1))));
  }

  /* Member function template for subtraction */
  float subtraction(std::string input) {
    std::vector<std::string> arr = split(input, '-');
    return stof(rtrim(ltrim(arr.at(0)))) - stof(rtrim(ltrim(arr.at(1))));
  }

  /* Member function template for multiplication */
  float multiplication(std::string input) {
    std::vector<std::string> arr = split(input, '*');
    return stof(rtrim(ltrim(arr.at(0)))) + stof(rtrim(ltrim(arr.at(1))));
  }

 /* Member function template for division */
  auto division(std::string input) {
    std::vector<std::string> arr = split(input, '/');
    float a =  stof(rtrim(ltrim(arr.at(0))));
    float b =  stof(rtrim(ltrim(arr.at(1))));
    return a / b;
    
  }

  /* Member function for computing factorial */      
  long long doFactorial(std::string input) {
    std::vector<std::string> arr = split(input, '!');
    int n = stoi(ltrim(rtrim(arr.at(0))));
    return factorial(n);
  }
  long long factorial(int n){
    return (n == 0 || n == 1) ? 1 : n * factorial(n - 1);
  }
};
#endif /* End of Guard CALCULATOR_H */