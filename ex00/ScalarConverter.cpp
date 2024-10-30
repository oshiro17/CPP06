#include "ScalarConverter.hpp"
ScalarConverter::ScalarConverter(){};

ScalarConverter::~ScalarConverter(){};


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
        std::cout<<std::endl;
}

bool ScalarConverter::isInt(const std::string &str,int &num)
{
    std::istringstream iss(str);
    iss>>num;
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
    else
        printChar(static_cast<unsigned char>(num));
    printInt(num);
    printFloat(static_cast<float>(num));
	printDouble(static_cast<double>(num));
    return true;
}


bool ScalarConverter::forFloat(const std::string &str)
{
    float num;

    if (str[str.length() - 1] != 'f')
		return false;
    std::string str_trim(str);
    str_trim.erase(str_trim.length() - 1);
    if (str_trim == "nan" || str_trim == "inf" || str_trim == "-inf" || str_trim == "+inf")
    {
        std::cout << "char: Impossible"<<std::endl;
        std::cout<<"int: Impossible\n"<<std::endl;
        std::cout << "float: " << str << std::endl;
        std::cout << "double: " << str_trim << std::endl;
		return true;
    }
    std::istringstream iss(str_trim);
    if (iss.fail() || !iss.eof()) 
		return false;
    iss >> num;
    if (num > static_cast<float>(std::numeric_limits<char>::max())
    || num < static_cast<float>(std::numeric_limits<char>::min()))
        std::cout << "char: Impossible" << std::endl;
    else
        printChar(static_cast<unsigned char>(num)); 
    if (num > static_cast<float>(std::numeric_limits<int>::max())
    || num < static_cast<float>(std::numeric_limits<int>::min()))
        std::cout << "int: Impossible" << std::endl;
    else
        printInt(static_cast<int>(num));
    printFloat(num);
    printDouble(static_cast<double>(num));
    return true;
}

void ScalarConverter::determineAndPrintType(const std::string &literal) {

	if (!forInt(literal))
		return ;
	else if (forFloat(literal))
		return ;
	// else if (isDouble(literal))
			return ;
	// else if (isChar(literal))
	// 	return ;
    // return;
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


