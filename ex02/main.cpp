#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

Base* generateRondom() {
    srand(static_cast<unsigned int>(time(0))); // 時間で乱数を初期化
    int random = rand() % 3;

    if (random == 0) return new A();
    else if (random == 1) return new B();
    else return new C();
}

void identify(Base& p) {
    try {
        (void)dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
    }
    catch (std::bad_cast&) {}
    
    try {
        (void)dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
    }
    catch (std::bad_cast&) {}

    try {
        (void)dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
    }
    catch (std::bad_cast&) {}
}
void identify(Base *p) {
	if (dynamic_cast<A*>(p))
		std::cout << "A";
	else if (dynamic_cast<B*>(p))
		std::cout << "B";
	else if (dynamic_cast<C*>(p))
		std::cout << "C";
	else
		std::cerr << "Error: unknown object type";
}
int main() {
	std::srand(std::time(NULL));

	Base *ptr = generateRondom();
	Base &ref = *ptr;
	identify(ptr);
	std::cout << ", ";
	identify(ref);
	delete ptr;
	return 0;
}
