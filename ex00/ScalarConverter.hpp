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

    static void printChar( unsigned char c);
    static void printInt( int i);
    static void printFloat(float f);
    static void printDouble( double d);

    static void determineAndPrintType(const std::string &literal);
    // static void isFloat(const std::string &str,float &num);
    static bool forDouble(const std::string &str);
    static bool forFloat(const std::string &str);
    static bool isInt(const std::string &str,int &num);
    static bool forChar(const std::string &str);
    // bool ScalarConverter::isDouble(const std::string&str,int &num);

    static bool forInt(const std::string &literal);
};

#endif // SCALARCONVERTER_HPP
