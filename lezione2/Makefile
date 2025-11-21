# Un'ulteriore 

BIN_FOLDER :=./bin
CXXFLAGS := -Wall

all: arrays pointers references pointers_arrays

# % viene sostituito dal requisito "passato" da all
# $@ - Nome del target
# $< - Primo prerequisito
%: %.cpp | $(BIN_FOLDER)
	g++ $(CXXFLAGS) $< -o $(BIN_FOLDER)/$@

$(BIN_FOLDER):
	@mkdir -p $(BIN_FOLDER)

clean:
	@rm -r $(BIN_FOLDER)

.PHONY: all clean