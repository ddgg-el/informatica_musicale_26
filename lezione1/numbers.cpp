#include <iostream>
#include <ostream>

int main()
{
	int num = 0; // %d
	float numdecimale = 3.5f; // %f
	double numerodoppio = 3.5; //

	std::cout << "Inserisci un numero: ";
	std::cin >> num;

	if(std::cin.fail()){
		std::cout << "Input non valido!" << std::endl;
		return 1;
	}

	std::cout << "Il numero è: " << num << std::endl;

	/**
	 	come si può fare in modo che il programma continui
		e ricominci anche se l'utente inserisce un input non valido?

		provate con "while" e con le funzioni "clear()" e "ignore()" di cin
		ATTENZIONE AI CICLI INFINITI
		(se dovesse succedere - e succede - potete interrompere 
		il programma con Ctrl+C - SÌ `CTRL` ANCHE IN MACOS)
	 */

	return 0;
}
