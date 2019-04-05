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
AllDomObj = ${PathToObj}ticket_DOM.o ${PathToObj}creditcard_DOM.o ${PathToObj}presentation_DOM.o

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
CompileDominios: ${PathToDom}abstract_DOM.hpp ${AllDomObj}
	@echo '### Terminada compilação dos Dominios ###'


######## Compilando cada dominio separadamente ##############

## Compilando main dos testes ##
${PathToObj}maintestes.o: ${PathToTests}main.cpp
	${CompileFull} ${MakeObj} ${PathToTests}main.cpp -o ${PathToObj}maintestes.o

## Compilando ticket ##
${PathToObj}ticket_DOM.o: ${PathToDom}ticket_DOM.cpp ${PathToDom}ticket_DOM.hpp
	$(call compile_obj,ticket_DOM.cpp,ticket_DOM.o)

${PathToObj}creditcard_DOM.o: ${PathToDom}creditcard_DOM.cpp ${PathToDom}creditcard_DOM.hpp
	$(call compile_obj,creditcard_DOM.cpp,creditcard_DOM.o)

${PathToObj}presentation_DOM.o: ${PathToDom}presentation_DOM.cpp ${PathToDom}presentation_DOM.hpp
	$(call compile_obj,presentation_DOM.cpp,presentation_DOM.o)


#############################################################