#include <climits>
#include <iostream>
#include <limits>
#include <ostream>

int main(){
	short s;
	int i;
	float f;
	double d;

	std::cout << "int: " << sizeof(i) << "byte" << std::endl;
	std::cout << "float: " << sizeof(f) << "byte" << std::endl;
	std::cout << "double: " << sizeof(d) << "byte" << std::endl;
	
	std::cout << "il numero int più alto è (INT_MAX): " << INT_MAX << std::endl;
	std::cout << "( oppure std::numeric_limits<int>::max() ): " << std::numeric_limits<int>::max() << std::endl;
	std::cout << "il numero int più basso è (INT_MIN): " << INT_MIN << std::endl;
	std::cout << "( oppure std::numeric_limits<int>::min() ): " << std::numeric_limits<int>::min() << std::endl;

	int high_number = pow(2, 32);
	std::cout << "pow(2, 32) \t ->\t" << pow(2, 32) << std::endl;
	std::cout << "int pow(2, 32)\t -> \t" << high_number << " l'output è troncato" << std::endl;

	return 0;
}