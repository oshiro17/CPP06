#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP
#include <iostream>
#include <sstream> // istringstream


// enum e_type {
// 	INT,
// 	FLOAT,
// 	DOUBLE,
//     CHAR,
//     OTHER,
// };

class ScalarConverter
{
    public:
     static void convert(std::string literal);
    private :
    ScalarConverter();
    // ScalarConverter(ScalarConverter const & copy);
    ~ScalarConverter();
    // ScalarConverter & operator =(ScalarConverter const & src);
}:

#endif