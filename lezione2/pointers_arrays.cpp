#include <cstddef>
#include <iostream>


void fill_array(int* arr, size_t size){
	for (size_t i = 0; i < size; i++) {
		arr[i] = 0; // modifica l'array originale
		
		// potrei scrivere la stessa istruzione
		// utilizzando l'aritmetica dei puntatori.
		// *(arr+i) = 0; 
	}
}

void print_array(int* arr, size_t size){
	std::cout << "[ ";
	for (size_t i=0; i < size; i++) {
		std::cout << arr[i] << " ";
	}
	std::cout << "]" << std::endl;
}

int main(){
	float arr_float[] = {0.6f, 0.7f};
	int arr_int[10];

	// Stampare un array direttamente tramite cout (o printf)
	// ci mostra solo l'indirizzo di memoria di quell'array
	std::cout << "arr_float:\t" << arr_float << " è uguale a " << "&arr_float:\t" << &arr_float << std::endl;
	// che coincide con l'indirizzo del primo elemento dell'array
    std::cout << "&arr_float[0]:\t" << &arr_float[0] << " di nuovo lo stesso indirizzo!" << std::endl;

	std::cout << "arr_float[0]:\t" << arr_float[0] << " (valore del primo elemento)" << std::endl; // posso stampare il primo valore così... (dereferenziazione implicita)
	std::cout << "*arr_float:\t" << *arr_float << " (valore del primo elemento)" << std::endl; // ...o così (dereferenziando l'indirizzo di memoria dell'arrray stesso)


	std::cout << "arr_float[1]:\t" << arr_float[1] << " (valore del secondo elemento)" << std::endl;
	std::cout  << "*(arr_float+1):\t" << *(arr_float+1)  << " (valore del secondo elemento)" <<  std::endl;

	std::cout << "arr_int è stato riempito dalla funzione fill_array" << std::endl;
	fill_array(arr_int, 10);
	print_array(arr_int, 10);

	return 0;
}