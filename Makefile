# Dominio dir:
SRC_DIR_DOM := TP1/dominios
OBJ_DIR_DOM := TP1/bin/dom

SRC_FILES_DOM := $(wildcard $(SRC_DIR_DOM)/*.cpp)
OBJ_FILES_DOM := $(patsubst $(SRC_DIR_DOM)/%.cpp,$(OBJ_DIR_DOM)/%.o,$(SRC_FILES_DOM))

# Entidades 
SRC_DIR_ENT := TP1/model
OBJ_DIR_ENT := TP1/bin/entidades

SRC_FILES_ENT := $(wildcard $(SRC_DIR_ENT)/*.cpp)
OBJ_FILES_ENT := $(patsubst $(SRC_DIR_ENT)/%.cpp,$(OBJ_DIR_ENT)/%.o,$(SRC_FILES_ENT))

# Teste
SRC_DIR_TESTE := TP1/testes
OBJ_DIR_TESTE := TP1/bin/test

SRC_FILES_TESTE := $(wildcard $(SRC_DIR_TESTE)/*.cpp)
OBJ_FILES_TESTE := $(patsubst $(SRC_DIR_TESTE)/%.cpp,$(OBJ_DIR_TESTE)/%.o,$(SRC_FILES_TESTE))

# Teste_dom 
SRC_DIR_TESTE_DOM := TP1/testes/dominios
OBJ_DIR_TESTE_DOM := TP1/bin/test_dom

SRC_FILES_TESTE_DOM := $(wildcard $(SRC_DIR_TESTE_DOM)/*.cpp)
OBJ_FILES_TESTE_DOM := $(patsubst $(SRC_DIR_TESTE_DOM)/%.cpp,$(OBJ_DIR_TESTE_DOM)/%.o,$(SRC_FILES_TESTE_DOM))

# Teste_ent
SRC_DIR_TESTE_ENT := TP1/testes/entidades
OBJ_DIR_TESTE_ENT := TP1/bin/test_ent

SRC_FILES_TESTE_ENT := $(wildcard $(SRC_DIR_TESTE_ENT)/*.cpp)
OBJ_FILES_TESTE_ENT := $(patsubst $(SRC_DIR_TESTE_ENT)/%.cpp,$(OBJ_DIR_TESTE_ENT)/%.o,$(SRC_FILES_TESTE_ENT))


# Flags
CPPFLAGS := -Wall -pedantic -std=c++11

# Compilation rules
teste: $(OBJ_FILES_DOM) $(OBJ_FILES_TESTE) $(OBJ_FILES_ENT) $(OBJ_FILES_TESTE_DOM) $(OBJ_FILES_TESTE_ENT)
	g++ $(LDFLAGS) -o $@ $^

clean: 
	rm -f TP1/bin/dom/*.o
	rm -f TP1/bin/test/*.o
	rm -f TP1/bin/test_dom/*.o
	rm -f TP1/bin/test_ent/*.o
	rm -f TP1/bin/entidades/*.o

# Generalize compile files
$(OBJ_DIR_DOM)/%.o: $(SRC_DIR_DOM)/%.cpp $(SRC_DIR_DOM)/%.hpp
	g++ $(CPPFLAGS) -c -o $@ $<

$(OBJ_DIR_TESTE)/%.o: $(SRC_DIR_TESTE)/%.cpp $(SRC_DIR_TESTE)/testes.hpp
	g++ $(CPPFLAGS) -c -o $@ $<

$(OBJ_DIR_ENT)/%.o: $(SRC_DIR_ENT)/%.cpp $(SRC_DIR_ENT)/%.hpp
	g++ $(CPPFLAGS) -c -o $@ $<

$(OBJ_DIR_TESTE_DOM)/%.o: $(SRC_DIR_TESTE_DOM)/%.cpp $(SRC_DIR_TESTE_DOM)/TU_DOM.hpp
	g++ $(CPPFLAGS) -c -o $@ $<

$(OBJ_DIR_TESTE_ENT)/%.o: $(SRC_DIR_TESTE_ENT)/%.cpp $(SRC_DIR_TESTE_ENT)/TU_ENT.hpp
	g++ $(CPPFLAGS) -c -o $@ $<