#ifndef MYLIBRARY_H
#define MYLIBRARY_H

#include <iostream>
#include <sstream>
#include <string>
#include <vector>
/*
    Author      : Anthoniraj Amalanathan
    Created on  : 2020-03-28 10:32:55
    Filename    : mylibrary.h
    Description : Headerfile for supporting functions
*/

/* function for splitting string into tokens */
std::vector<std::string> split(const std::string &s, char delimiter) {
    std::vector<std::string> tokens;
    std::string token;
    std::istringstream tokenStream(s);
    while (std::getline(tokenStream, token, delimiter)) {
      tokens.push_back(token);
    }
    return tokens;
}

/* Function identifying which operator is used for calculation*/
bool findSymbol(std::string str, char op) {
    size_t found = str.find(op);
    if (found != std::string::npos)
      return true;
    else
      return false;
}

/* Function for removing unwanted chars from right side */
std::string rtrim(std::string str) {
  // trim trailing spaces
  size_t endpos = str.find_last_not_of(" ");
  size_t startpos = str.find_first_not_of(" ");
  if (std::string::npos != endpos) {
    str = str.substr(0, endpos + 1);
    str = str.substr(startpos);
  } else {
    str.erase(std::remove(std::begin(str), std::end(str), ' '),
              std::end(str));
  }
  return str;
}

/* Function for removing unwanted chars from left side */
std::string ltrim(std::string str) {
  // trim leading spaces
  size_t startpos = str.find_first_not_of(" ");
  if (std::string::npos != startpos) {
    str = str.substr(startpos);
  }
  return str;
}




#endif /* End of Guard MYLIBRARY_H */