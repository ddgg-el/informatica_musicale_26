Lezione 2
---------

> Consiglio di seguire questa lezione seguendo il seguente ordine:
>1. arrays
>2. pointers
>3. pointers_arrays
>4. references

Per compilare tutti gli esempi contenuti in questa cartella si può usare il comando:
```zsh
make
```
che salverà tutti gli eseguibili nella cartella `bin`, che verrà creata in questa cartella.

Tutti i programmi dovranno quindi essere lanciati con il comando:
```bash
% ./bin/<nome-eseguibile>
```

Eventuali miglioramenti ai programmi, proposti a lezione come esercizio, sono descritti nel codice sorgente di ciascun file.

### Gli array in C++
> vedi file [`arrays.cpp`](arrays.cpp)

In questo corso, lavoreremo principalmente con array definiti *C-style* che nel mondo dell'audio digitale sono ancora particolarmente diffuse perché considerate leggere ed efficienti.

Per definire un *array* bisogna definire la tipologia di variabile che conterrà, poiché non sono ammessi array *misti*, e la loro dimensione. È possibile lasciare che il compilatore calcoli la lunghezza dell'array qualora l'array venga inizializzato immediatamente dopo essere stato definito. Come tutte le variabili in C++ è possibile infatti definire un array di una certa dimensione per riempirlo successivamente (vedi file [pointers_array.cpp](pointers_array.cpp)).

C++ offre altre strutture con le quali è possibile rappresentare degli array (che in realtà sono anche molto più comode!). Purtroppo però sono considerate più lente dei C-style array quindi si troveranno più raramente nelle applicazioni audio professionali. Queste sono:
'''
std::vector<class Tp>
std::array<class Tp, size_t Size>
'''

### I puntatori
> vedi file [`pointers.cpp`](pointers.cpp)

I puntatori sono una tipologia di variabile che rappresenta un'indirizzo di memoria.

Ipotizziamo di dichiarare due variabili di tipo `integer`
```cpp
int var1 = 5;
int var2 = 10;
```
Ogni variabile dichiarata ha un indirizzo di memoria e uno spazio riservato di una determinata dimensione. È possibile ottenere l'indirizzo di memoria con l'operatore **`&`**.

L'indirizzo di memoria della variabile `var1` -> `&var1` sarà essere un valore espresso in numeri esadecimali (per esempio `0x16d88253c') che, per semplicità, chiameremo l'indirizzo `56` (`0x38` nel sistema decimale).

Dichiarando 2 variabili una dopo l'altra è possibile (ma non garantito) che
i loro indirizzi di memoria siano consecutivi, e la differenza tra le due è pari alla dimensione della tipologia di dato. In questo caso un integer occupa 4 bytes quindi la variabile `var2` avrà l'indirizzo `56 + 4 = 60` (`0x3c` in esadecimale).

> N.B. Questo dato è garantito solo per strutture ordinate come ad esempio gli array. Un elemento di un array avrà SEMPRE un indirizzo di memoria contiguo a quello che lo precede.

Gli indirizzi di memoria possono essere quindi salvati in una variabile che dovranno essere dello stesso tipo della variabile di cui vogliamo salvare l'indirizzo, seguita dal simbolo **`*`**. Nel nostro esempio, possiamo quindi salvare l'indirizzo di memoria di `var1` in una variabile di tipo `int*`: un puntatore ad un integer.

L'utilizzo dei puntatori è estremamente diffuso negli argomenti delle funzioni perché ci permettono di passare delle informazioni da una funzione all'altra semplicemente trasmettendo un indirizzo di memoria e non l'interezza del dato.

Per accedere al **contenuto** di un determinato indirizzo di memoria salvato in un puntatore si può usare di nuovo l'operatore **`*`** ma sul puntatore stesso:
```cpp
int a = 3;
int* pa = &a;

std::cout << *pa; // stampa 3
```

### Array come puntatori
> vedi file [`pointers_arrays.cpp`](pointers_arrays.cpp)

Gli array e i puntatori in C++ sono intrinsecamente collegati. Il nome di un array, nella maggior parte dei contesti, decade automaticamente a un puntatore al suo primo elemento. Questa proprietà, unita alla garanzia di contiguità degli elementi, rende gli array il caso d'uso ideale per comprendere i vantaggi dei puntatori come argomenti di funzione.

Perché passare puntatori ad array?

- Efficienza: invece di copiare l'intero array, passiamo solo un indirizzo
- Modificabilità: le funzioni possono modificare gli elementi dell'array originale
- Flessibilità: una singola funzione può gestire array di diverse dimensioni

### Le referenze
> vedi file [`references.cpp`](references.cpp)`

Le *referenze* in C++ sono alias per variabili esistenti - pensale come un "secondo nome" per la stessa locazione di memoria. A differenza dei puntatori, le referenze devono essere inizializzate al momento della dichiarazione e non possono essere riassegnate a riferirsi a una variabile diversa.

Una referenza si definisce con la seguente sintassi:
```c++
int a = 10;
int& ra = a;
```

> N.B. l'utilizzo del simbolo **`&`** in questo contesto è diverso da quello usato per leggere un indirizzo di memoria di una variabile!

Le referenze sono particolarmente preziose come parametri di funzione, dove permettono di modificare le variabili originali senza la complessità sintattica dei puntatori, mantenendo la semantica di passaggio per valore.

### L'utilizzo di `&` e `*`

Come abbiamo visto, gli operatori `&` e di `*` possono avere dei significati diversi contestualmente a come e a dove vengono utilizzati. Quanto segue è una schema riassuntivo dei loro utilizzi

L'operatore `&` (e commerciale)
- In **dichiarazioni**: crea una **reference** (alias di variabile)
  ```cpp
  int& ref = variabile;  // ref diventa un alias di variabile
  ```
- In **espressioni**: restituisce l'**indirizzo di memoria**
	```cpp
 	std::cout << &variabile;  // indirizzo di variabile
	```
L'operatore `*` (asterisco)

- In **dichiarazioni**: definisce un **puntatore**
	```cpp
	int* ptr;  // ptr è un puntatore a intero
	```
- In **espressioni**: **dereferenzia** un puntatore
	```cpp
	std::cout << *ptr;  // accede al valore all'indirizzo puntato
	```