SRC=./src
LIB=./lib
INC= -I ./include/
BIN=./bin
all:mesaj1 quicksort.o ctimer.o mesaj2 link
	
ctimer.o:
	@g++ -c $(SRC)/ctimer.cpp $(INC) -o $(LIB)/ctimer.o
quicksort.o:
	@g++ -c $(SRC)/quicksort.cpp $(INC) -o $(LIB)/quicksort.o	
link:
	@g++ $(LIB)/quicksort.o $(LIB)/ctimer.o -o $(BIN)/quicksort.exe
	
mesaj1:
	@echo objeler olusturuluyor...

mesaj2:
	@echo objeler linkleniyor...
	