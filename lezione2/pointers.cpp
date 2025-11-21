#include <iostream>

// l'argomento di questa funzione è un indirizzo di memoria
// la funzione sovrascriverà il valore salvato in quell'indirizzo
// le variabile 'a' dichiarata in main cambierà di conseguenza
void change_number(int* num){
	*num = *num + 3;
}


int main(){
	int a = 45;
	int b = 30;
	int* c;
	// con l'operatore '&' ottengo l'indirizzo di memoria di una variabile
	std::cout << "Indirizzo di memoria di a: " << &a << std::endl;

	// salvo l'indirizzo di memoria di a nel puntatore c
	c = &a;

	// stampo l'indirizzo di memoria tramite un puntatore
	std::cout << "Indirizzo salvato in c: " << c << std::endl;

	// è possibile leggere il valore di un puntatore (quindi
	// il valore salvato ad un determinato indirizzo di memoria)
	// utilizzando l'operatore * su un puntatore
	std::cout << "Valore dereferenziato di c: *c = " << *c << std::endl;

	std::cout << "Prima di change_number(c): a = " << a << std::endl;
	change_number(c);
	std::cout << "Dopo change_number(c): a = " << a << std::endl;

    std::cout << "\n--- Dimostrazione aggiuntiva uso diretto di & ---" << std::endl;
    std::cout << "Prima di change_number(&b): b = " << b << std::endl;
    change_number(&b);  // Passo direttamente l'indirizzo di b
    std::cout << "Dopo change_number(&b): b = " << b << std::endl;
    

	return 0;
}