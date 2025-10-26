# Corso di Informatica Musicale 


## Lezione 0

Per iniziare è importante preparare il proprio ambiente di sviluppo, che sarà diverso in base al sistema operativo sul quale lavorerete.

### Windows

Seguite le istruzioni riportate in questa pagina https://code.visualstudio.com/docs/cpp/config-mingw fino al punto 2 del paragrafo **Check your MinGW installation** incluso.

L'articolo vi guiderà nell'installazione di estensioni per Visual Studio Code e di un *sottosistema virtuale* chiamato *MSYS2*, che impareremo ad usare a lezione.

### MacOs

Seguite le istruzioni riportate in questa pagina https://code.visualstudio.com/docs/cpp/config-clang-mac fino al paragrafo **Ensure Clang is installed** incluso.


Questo articolo vi guiderà nell'installazione estensioni di Visual Studio Code per lavorare in C++ ed evenutalmente degli **Xcode Command Line Tools**.

Oltre a questo è consigliato installare `brew` un manager librerie *Linux-like* seguendo le istruzioni riportate in questo articolo https://mac.install.guide/homebrew/3

Se tutto è andato a buon fine dovreste poter aprire un terminale e lanciare il comando:
```bash
% g++ --version
# l'output del comando potrebbe variare
Apple clang version 17.0.0 (clang-1700.0.13.5)
```

### Compilare un file

Se volete verificare che il vostro sistema è pronto per iniziare a lavorare in C++ potete provare a compilare il file `start.cpp` di questa repository. 
Aprite la cartella `informatica_musicale_25` in Visual Studio Code. Aprite un terminale (per gli utenti Windows assicuratevi che sia un terminale `MinGW64`) e lanciate il comando:

```zsh
% g++ start
```
Questo comando dovrebbe produrre un file binario chiamato `a.out` che potrete lanciare con il comando
```zsh
% ./a.out
```