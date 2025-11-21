
#include <cstddef>
#include <iostream>

// questa funzione riceve il parametro "per valore" (quindi una copia)
// Qualsiasi modifica fatta a `num` non influisce sulla variabile originale
void dont_change_a(int num){
	// &num != &a
	num = num +10;
	std::cout << num << std::endl;
}

// questa invece riceve il parametro per referenza (quindi un'alias di `a`)
// le modifiche di `num`si riflettono su `a`
// mi permette di semplificare la sintassi utilizzata nella 
// funzione change_number(int* num) dichiarata in pointers.cpp
// ma fa esattamente la stessa cosa
void change_a(int& num){
	// &num == &a
	num = num +10;
}

int main(){
	int a = 4;
	int& x = a; // referenza ad a (un vero e proprio alias)
	std::cout << "Valore di a: " << a << std::endl;
	std::cout << "Valore di x: " << x << std::endl;
	std::cout << "indirizzo di memoria di a -> &a" << &a << std::endl; // stesso indirizzo di memoria
	std::cout << "indirizzo di memoria di x -> &x" << &x << std::endl; // stesso indirizzo di memoria
	dont_change_a(a);
	std::cout << "a dopo essere passata per dont_change_a: " << a << std::endl;
	change_a(a);
	std::cout << "a dopo essere passata per change_a: "<< a << std::endl;

	return 0;
}