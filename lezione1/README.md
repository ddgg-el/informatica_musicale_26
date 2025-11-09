Lezione 1
---------

Per compilare tutti gli esempi contenuti in questa cartella si può usare il comando:
```zsh
make
```
che salverà tutti gli eseguibili nella cartella `bin`, che verrà creata in questa cartella.

Tutti i programmi dovranno quindi essere lanciati con il comando:
```bash
% ./bin/<nome-eseguibile>
```

Eventuali miglioramenti ai programmi, proposti a lezione come esercizio, sono descritti nel codice sorgente di ciascun file, mentre un progetto semplice da realizzare per esercitarsi potrebbe essere programmare un gioco tipo *"Indovina un numero tra 0 e 100"*

### La funzione `main`

Per prima cosa è importante ricordare che per definire una funzione generica, il compilatore deve sapere che **tipo** di variabile restituirà la funzione, e main **DEVE** restituire un numero intero quindi un `int`. La sintassi per completare la definizione di una funzione è simile a quella di Javascript:
```c++
int main(/* eventuali argomenti */){
	// i corpo della funzione
	return 0
}
```
### il `namespace`
Abbiamo visto come funzioni come `cout` sono disponibili tramite la libreria `iostream` con il prefisso `std::`. Questo prefisso è necessario perché queste funzioni e oggetti sono definiti all'interno di un *namespace* (in questo caso `std` - standard), un meccanismo che permette di organizzare il codice in ambiti distinti, prevenendo conflitti di nomi tra diverse librerie. Senza *namespace*, se due librerie definissero funzioni con lo stesso nome, ci sarebbe un conflitto.

Per evitare di dover scrivere continuamente `std::` si può utilizzare la direttiva:
```c++
using namespace std;
```
Tuttavia, questa pratica è generalmente sconsigliata in progetti grandi perché può portare a conflitti di nomi.

### Le stringhe ed i caratteri
> vedi file `start.cpp` dove si utilizzano anche le funzioni `cout`, `cin` e `printf`

Un singolo carattere può essere identificato da c++ con la definizione di una variabile `char`.
Nato dal linguaggio C, C++ può considerare un array di caratteri come una "stringa" (parola - frase), ma è più moderno e sicuramente più diffuso l'utilizzo di `std::string`, una *struttura* informatica più complessa di una semplice tipologia di variabile `char`. Questa infatti si adatta dinamicamente alla lunghezza del testo e fornisce metodi utili per la manipolazione delle stringhe.

### I numeri
> vedi file `numbers.cpp` si trova anche un esempio della condizione `if`

Esistono diverse tipologie di variabili per rappresentare i numeri.
Le più comuni sono: 
- `int` per i numeri interi
- `float` per i numeri decimali
- `double` per i numeri decimali a doppia precisione

Queste tipologie si differenziano principalmente per:
	
- Dimensione (vedi prossimo paragrafo)
- Precisione: float ha circa 7 cifre decimali significative, mentre double circa 15
- Intervallo di valori: int può rappresentare numeri da -2³¹ a 2³¹-1, mentre i tipi floating point hanno intervalli molto più ampi

 #### Dimensione delle variabile
> vedi file `sizeof.cpp`

Per scoprire la dimensione di una variabile, quindi quanto spazio occuperà nella memoria si può usare la funzione `sizeof`.
Vedremo che entrambe le variabili `int` e `float` restituiranno un valore di 4 (4 bytes - 32bit) mentre `double` 8 (64 bit).

______

La scelta del tipo di variabile numerica appropriato dipende dalle esigenze di memoria, precisione e intervallo di valori richiesti dall'applicazione.
