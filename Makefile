#Variables
Compiler = g++ 
Flags = -Wall -pedantic
MakeObj = -c 

PathToObj = TP1/bin/
PathToDom = TP1/dominios/
PathToTests = TP1/testes/

CompileFull = ${Compiler} ${Flags}

# Botar todos os .o's dos dominios aqui, seguindo o padrão
# Caso adicione algum .o adicione a compilação dele junto as outras, seguindo também o padrão:
#${PathToObj}'nome_do_dom'DOM.o: ${PathToDom}'nome_do_dom'.cpp ${PathToDom}'nome_do_dom'.hpp
#	$(call compile_obj,'nome_do_dom'.cpp,'nome_do_dom'.o)
AllDomObj = ${PathToObj}ticketDOM.o ${PathToObj}creditcardDOM.o

define compile_obj
    ${CompileFull} ${MakeObj} ${PathToDom}$(1) -o ${PathToObj}$(2) 
endef

all:
	@echo 'não implementado'

####### Compilando Testes ########
testes: CompileDominios ${PathToObj}maintestes.o
	${CompileFull} ${AllDomObj} ${PathToObj}main.o  -o teste
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

${PathToObj}creditcardDOM.o: ${PathToDom}creditcardDOM.cpp ${PathToDom}creditcardDOM.hpp
	$(call compile_obj,creditcardDOM.cpp,creditcardDOM.o)

#############################################################