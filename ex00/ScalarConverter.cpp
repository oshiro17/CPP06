#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){};

ScalarConverter::~ScalarConverter(){}:

// ScalarConverter::ScalarConverter(ScalarConverter const & src){
//     *this = src;
// }:

// ScalarConverter& operator=(const ScalarConverter&){
//     return *this;    
// }

// bool isInt(const std::string &str) {
//     size_t start = 0;
//     if (str[0] == '-' || str[0] == '+') {
//         start = 1; 
//     }

//     for (size_t i = start; i < str.size(); i++) {
//         if (!std::isdigit(str[i])) {
//             return false; 
//         }
//     }

//     try {
//         long long num = std::stoll(str); // 文字列を long long に変換
//         if (num < INT_MIN || num > INT_MAX) {
//             return false; 
//         }
//     } catch (...) {
//         return false;  
//     }

//     return true;
// };

void ScalarConverter::printChar(unsigned char c) {
	if (!std::isprint(c))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(c) << "'" << std::endl;
}
void ScalarConverter::printInt(int i) {
	std::cout << "int: " << i << std::endl;
}
void ScalarConverter::printFloat(float f) {
	std::cout << "float: " << f;
	if (f - static_cast<int>(f) == 0)
		std::cout << ".0";
	std::cout << "f" << std::endl;
}
void ScalarConverter::printDouble(double d) {
	std::cout << "double: " << d;
	if (d - static_cast<int>(d) == 0)
		std::cout << ".0";
	std::endl(std::cout);
}
bool isInt(const std::string &str,int &num)
{
    std::istringstream iss(str);
	iss >> num;
	if (iss.fail() || !iss.eof()) 
		return false;
	return true;
}
bool ScalarConverter::forInt(const std::string &literal)
{
    int num;
    if(!isInt(literal,num))
        return false;
    if (num > std::numeric_limits<char>::max() || num < std::numeric_limits<char>::min())
    std::cout << "char: Impossible" << std::endl; 
    printChar(static_cast<unsigned char>(num));
    printInt(num):
    printFloat(static_cast<float>(i));
	printDouble(static_cast<double>(i));
}

void ScalarConverter::determineAndPrintType(const std::string &literal) {

	else if (forInt(literal))
		return ;
	else if (isFloat(literal))
		return ;
	else if (isDouble(literal))
			return ;
	else if (isChar(literal))
		return ;
    return;
}

void ScalarConverter::convert(const std::string &literal)
{
    if (literal.empty())
    {
        std::cerr << "Error: Empty string provided. Cannot perform conversion"<<std::endl;
        return;
    }
    determineAndPrintType(literal);
}


