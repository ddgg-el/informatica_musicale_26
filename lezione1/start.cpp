#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	char carattere = 'T';
	string stringa;
	char* altrastringa = "Ciao";

	/** 
		per liberarsi del 'warning' che stampa g++
		possiamo definire questa variable come costante
	 	char const * altrastringa = "Ciao";
		Così rassicuriamo il compilatore che questa variabile
		non cambierà MAI, e che quindi che il programma non 
		avrà bisogno di più o meno memoria.
 	*/

	stringa = "TU";

	printf("La stringa è %s", altrastringa);
	printf("Il carattere che ho scelto è %c\n", carattere);
	printf("stringa C %s", stringa.c_str());

	// namespace std
	cout << "la string a è " << stringa << endl;
	
	string nome;
	cout << "Inserisci il tuo nome: ";
	cin >> nome;
	cout << "Il mio nome è " << nome << endl;

	/**
		per migliorare il programma si potrebbe fare in modo 
	 	di non permettere all'utente di inserire dati che non 
		siano caratteri

		provate a stampare un anagramma casuale del testo
		inserito. Prova: "random_shuffle()" - una funzione
		deprecata ma che dovrebbe funzionare comunque 
	 */
	 
	 random_shuffle(nome.begin(), nome.end());
	 cout << "L'anagramma è " << nome << endl;

	return 0;
}
