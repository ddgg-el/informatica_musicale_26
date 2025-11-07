# Questo makefile è aggiornato rispetto a come l'abbiamo lasciato a lezione
# Oltre ad aver aggiunto la variabile BIN_FOLDER (usata nelle varie istruzione per i target)
# utilizzo il "placeholder" $@ per utilizzare il nome del target all'interno del comando di 
# compilazione. Per esempio, nel caso del target 'number', $@ prenderà il valore appunti di 'number'.
# Il comando rimane quindi comunque 'g++ number.cpp -o ./bin/number'


BIN_FOLDER=./bin

all: $(BIN_FOLDER) | numbers start sizeof

numbers:
	g++ $@.cpp -o $(BIN_FOLDER)/$@

start:
	g++ $@.cpp -o $(BIN_FOLDER)/$@

sizeof:
	g++ $@.cpp -o $(BIN_FOLDER)/$@

$(BIN_FOLDER):
	@mkdir $(BIN_FOLDER)

clean:
	@rm -r $(BIN_FOLDER)
