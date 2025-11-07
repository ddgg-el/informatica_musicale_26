#include <iostream>

int main(){
	int i;
	float f;
	double d;

	std::cout << "int: " << sizeof(i) << "byte" << std::endl;
	std::cout << "float: " << sizeof(f) << "byte" << std::endl;
	std::cout << "double: " << sizeof(d) << "byte" << std::endl;

	/** non proposto a lezione, ma un esercizio potrebbe essere di
		fare in modo che il computer calcoli e stampi nella console 
		la risposta a queste domande:
		- quanta memoria usa il mio programma in totale?
		- qual'è il numero più alto che posso rappresentare un `int`?
		- qual'è il numero più basso che posso rappresentare un `int`?
		- cosa succede se supero queste soglie?
	 */

	return 0;
}