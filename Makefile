#Variables
Compiler = g++ 
Flags = -Wall -pedantic -std=c++11
MakeObj = -c 

PathToObj = TP1/bin/
PathToDom = TP1/dominios/
PathToTests = TP1/testes/

CompileFull = ${Compiler} ${Flags}

# Botar todos os .o's dos dominios aqui, seguindo o padrão
AllDomObj = ${PathToObj}ticket_DOM.o ${PathToObj}creditcard_DOM.o ${PathToObj}presentation_DOM.o ${PathToObj}abstract_DOM.o
# Caso adicione algum .o adicione a compilação dele junto as outras, seguindo também o padrão:
#${PathToObj}'nome_do_dom'.o: ${PathToDom}'nome_do_dom'.cpp ${PathToDom}''nome_do_dom'.hpp
#	$(call compile_obj_dom,'nome_do_dom'.cpp,'nome_do_dom'.o)
define compile_obj_dom
    ${CompileFull} ${MakeObj} ${PathToDom}$(1) -o ${PathToObj}$(2) 
endef

# Botar todos os .o's dos testes aqui, seguindo o padrão
AllTestObj = ${PathToObj}ticket_testes.o ${PathToObj}creditcard_testes.o ${PathToObj}presentation_testes.o ${PathToObj}testes.o 
# Caso adicione algum .o adicione a compilação dele junto as outras, seguindo também o padrão:
#${PathToObj}'nome_do_teste'.o: ${PathToTests}'nome_do_teste'.cpp ${PathToTests}testes.hpp
#	$(call compile_obj_test,'nome_do_teste'.cpp,'nome_do_teste'.o)
define compile_obj_test
    ${CompileFull} ${MakeObj} ${PathToTests}$(1) -o ${PathToObj}$(2) 
endef
###### Fim das variaveis ########

all:
	@echo 'não implementado'
	@echo "'make testes' para criar arquivo de testes"

clean:
	rm -f TP1/bin/*.o

####### Compilando Testes ########
testes: CompileDominios CompileTestes ${PathToObj}maintestes.o
	${CompileFull} ${AllDomObj} ${AllTestObj} ${PathToObj}maintestes.o  -o teste
	@echo '### Terminada compilação###'

### Compila os dominios ###
CompileDominios: ${AllDomObj}
	@echo '### Terminada compilação dos Dominios ###'

### Compilando arquivo de testes ##
CompileTestes: ${AllTestObj}
	@echo '### Terminada compilação dos Testes ###'

######## Compilando cada dominio separadamente ##############

## Compilando ticket ##
${PathToObj}ticket_DOM.o: ${PathToDom}ticket_DOM.cpp ${PathToDom}ticket_DOM.hpp ${PathToDom}abstract_DOM.hpp
	$(call compile_obj_dom,ticket_DOM.cpp,ticket_DOM.o)

## Compilando credit card ##
${PathToObj}creditcard_DOM.o: ${PathToDom}creditcard_DOM.cpp ${PathToDom}creditcard_DOM.hpp ${PathToDom}abstract_DOM.hpp
	$(call compile_obj_dom,creditcard_DOM.cpp,creditcard_DOM.o)

## Compilando apresentação ##
${PathToObj}presentation_DOM.o: ${PathToDom}presentation_DOM.cpp ${PathToDom}presentation_DOM.hpp ${PathToDom}abstract_DOM.hpp
	$(call compile_obj_dom,presentation_DOM.cpp,presentation_DOM.o)

${PathToObj}abstract_DOM.o: ${PathToDom}abstract_DOM.cpp ${PathToDom}abstract_DOM.hpp
	$(call compile_obj_dom,abstract_DOM.cpp,abstract_DOM.o)

#############################################################


########## Compilando cada arquivo de teste ##############

## Compilando main dos testes ##
${PathToObj}maintestes.o: ${PathToTests}main.cpp
	${CompileFull} ${MakeObj} ${PathToTests}main.cpp -o ${PathToObj}maintestes.o

${PathToObj}ticket_testes.o: ${PathToTests}ticket_testes.cpp ${PathToTests}testes.hpp
	$(call compile_obj_test,ticket_testes.cpp,ticket_testes.o)

${PathToObj}creditcard_testes.o: ${PathToTests}creditcard_testes.cpp ${PathToTests}testes.hpp
	$(call compile_obj_test,creditcard_testes.cpp,creditcard_testes.o)

${PathToObj}testes.o: ${PathToTests}testes.cpp ${PathToTests}testes.hpp
	$(call compile_obj_test,testes.cpp,testes.o)

${PathToObj}presentation_testes.o: ${PathToTests}presentation_testes.cpp ${PathToTests}testes.hpp
	$(call compile_obj_test,presentation_testes.cpp,presentation_testes.o)
#############################################################