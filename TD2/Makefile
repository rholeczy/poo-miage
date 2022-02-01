cc = g++
OBJ = compte.o banque.o mainBanque.o
progbanque : $(OBJ) 
	$(cc) $(OBJ) -o progbanque

compte.o : compte.cpp compte.hpp 
	$(cc) -c compte.cpp

banque.o : banque.cpp banque.hpp compte.hpp
	$(cc) -c banque.cpp

mainbanque.o : mainbanque.cpp banque.hpp compte.hpp
	$(cc) -c mainbanque.cpp