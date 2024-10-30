int main(int argc, char **argv)
{
    if(argc!=2 || !argv[0] || !argv[1])
    {
        std::cerr << "Error: Invalid input." <<std::endl;
        return(1);
    }
   ScalarConverter::convert(argv[1]);
    return (0);
}