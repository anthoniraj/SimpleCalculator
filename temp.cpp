#include<iostream>
/*
    Author      : Anthoniraj Amalanathan
    Created on  : 2020-03-28 17:12:21
    Filename    : temp.cpp
    Description : Testing if string contains spacial chars
*/
using namespace std;
int main()
{
  std::string x("0 + 4");
  if (x.find_first_not_of("0123456789+-*/!. ") !=std::string::npos) {
    std::cerr << "Error\n";
  }else{
    cout << "Contains valid data" << "\n";
  }
    return 0;
}