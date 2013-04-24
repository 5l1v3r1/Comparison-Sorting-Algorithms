SRC=./src
LIB=./lib
INC= -I ./include/
BIN=./bin
all:mesaj1 insertionsort.o ctimer.o mesaj2 link
	
ctimer.o:
	@g++ -c $(SRC)/ctimer.cpp $(INC) -o $(LIB)/ctimer.o
insertionsort.o:
	@g++ -c $(SRC)/insertionsort.cpp $(INC) -o $(LIB)/insertionsort.o	
link:
	@g++ $(LIB)/insertionsort.o $(LIB)/ctimer.o -o $(BIN)/insertionsort.exe
	
mesaj1:
	@echo objeler olusturuluyor...

mesaj2:
	@echo objeler linkleniyor...
	