#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <sstream>
#include <limits>
#include <iomanip>
#include <cctype>

class ScalarConverter {
public:
    static void convert(const std::string &literal);

private:
    ScalarConverter();
    ~ScalarConverter();

    static void printChar(unsigned char c);
    static void printInt(int i);
    static void printFloat(float f);
    static void printDouble(double d);

    static void determineAndPrintType(const std::string &literal);

    static bool isInt(const std::string &str,int &num);
    static bool forInt(const std::string &literal);
    static bool isFloat(const std::string &literal);
    static bool isDouble(const std::string &literal);
    static bool isChar(const std::string &literal);
};

#endif // SCALARCONVERTER_HPP
