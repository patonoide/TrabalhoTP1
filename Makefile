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

#Views
SRC_DIR_VIEW := TP1/view
OBJ_DIR_VIEW := TP1/bin/view

SRC_FILES_VIEW := $(wildcard $(SRC_DIR_VIEW)/*.cpp)
OBJ_FILES_VIEW := $(patsubst $(SRC_DIR_VIEW)/%.cpp,$(OBJ_DIR_VIEW)/%.o,$(SRC_FILES_VIEW))

#Main
SRC_DIR_MAIN := TP1
OBJ_DIR_MAIN := TP1/bin

SRC_FILES_MAIN := $(wildcard $(SRC_DIR_MAIN)/*.cpp)
OBJ_FILES_MAIN := $(patsubst $(SRC_DIR_MAIN)/%.cpp,$(OBJ_DIR_MAIN)/%.o,$(SRC_FILES_MAIN))

# Flags
CPPFLAGS := -Wall -pedantic -std=c++11 -o3
VIEWFLAG := -lncurses

views: $(OBJ_FILES_VIEW) $(OBJ_FILES_MAIN)
	g++ TP1/bin/libncurses.a $(LDFLAGS) -o $@ $^  $(VIEWFLAG)

# Compilation rules
teste: $(OBJ_FILES_DOM) $(OBJ_FILES_TESTE) $(OBJ_FILES_ENT) $(OBJ_FILES_TESTE_DOM) $(OBJ_FILES_TESTE_ENT)
	g++ $(LDFLAGS) -o $@ $^

clean: 
	rm -f TP1/bin/dom/*.o
	rm -f TP1/bin/test/*.o
	rm -f TP1/bin/test_dom/*.o
	rm -f TP1/bin/test_ent/*.o
	rm -f TP1/bin/entidades/*.o
	rm -f TP1/bin/view/*.o

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

$(OBJ_DIR_VIEW)/%.o: $(SRC_DIR_VIEW)/%.cpp $(SRC_DIR_VIEW)/%.hpp
	g++ $(CPPFLAGS) -c -o $@ $<

$(OBJ_DIR_MAIN)/%.o: $(SRC_DIR_MAIN)/%.cpp
	g++ $(CPPFLAGS) -c -o $@ $<