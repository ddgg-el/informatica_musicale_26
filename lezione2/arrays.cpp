
#include <cstddef>
#include <iostream>

void print_array(int arr[], size_t size){
	std::cout << "[ ";
	for (size_t i=0; i < size; i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << "]" << std::endl;
}

int main(){
	int arr[5] = {3,4,5,6,7};
	float arr_float[] = {6.7f,8.7f};

	arr_float[0] = 5.4f; // sostituisco il valore di 6.7
	arr[2] = 100; // sostituisco il valore di 4

	// è possibile risalire alla dimensione dell'array mettendo il relazione
	// lo spazio che occupa l'intero array in memoria e la dimensione della
	// tipologia di variabili che contiene
	std::cout << "\n--- Dimensioni in memoria ---" << std::endl;
	std::cout << "sizeof(arr): " << sizeof(arr) << " bytes" << std::endl;
	std::cout << "sizeof(arr[0]): " << sizeof(arr[0]) << " bytes" << std::endl;
	std::cout << "Elementi in arr: " << sizeof(arr) / sizeof(arr[0]) << std::endl;

	std::cout << "\nATTENZIONE: quando un array viene passato ad una funzione\nnon è più possibile risalire alla dimensione dell'array!\n" << std::endl;

	std::cout << "Array di Interi: ";
	// c'è motivo per cui non possiamo stampare direttamente un array
	// vedi file pointers_array.cpp
	print_array(arr, 5);

	return 0;
}