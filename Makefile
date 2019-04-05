#Variables
Compiler = g++ 
Flags = -Wall -pedantic
MakeObj = -c 

PathToObj = TP1/bin/
PathToDom = TP1/dominios/
PathToTests = TP1/testes/

CompileFull = ${Compiler} ${Flags}
AllDomObj = ${PathToObj}ticketDOM.o

define compile_obj
    ${CompileFull} ${MakeObj} ${PathToDom}$(1) -o ${PathToObj}$(2) 
endef

all:
	@echo 'não implementado'

####### Compilando Testes ########
testes: CompileDominios ${PathToObj}maintestes.o
	${CompileFull} ${PathToObj}ticketDOM.o ${PathToObj}main.o  -o teste
	@echo '### Terminada compilação dos testes ###'

### Compila os dominios ###
CompileDominios: ${PathToDom}abstractDOM.hpp ${AllDomObj}
	@echo '### Terminada compilação dos Dominios ###'


######## Compilando cada dominio separadamente ##############

## Compilando main dos testes ##
${PathToObj}maintestes.o: ${PathToTests}main.cpp
	${CompileFull} ${MakeObj} ${PathToTests}main.cpp -o ${PathToObj}maintestes.o

## Compilando ticket ##
${PathToObj}ticketDOM.o: ${PathToDom}ticketDOM.cpp ${PathToDom}ticketDOM.hpp
	$(call compile_obj,ticketDOM.cpp,ticketDOM.o)

#############################################################