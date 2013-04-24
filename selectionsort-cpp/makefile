SRC=./src
LIB=./lib
INC= -I ./include/
BIN=./bin
all:mesaj1 selectionsort.o ctimer.o mesaj2 link
	
ctimer.o:
	@g++ -c $(SRC)/ctimer.cpp $(INC) -o $(LIB)/ctimer.o
selectionsort.o:
	@g++ -c $(SRC)/selectionsort.cpp $(INC) -o $(LIB)/selectionsort.o	
link:
	@g++ $(LIB)/selectionsort.o $(LIB)/ctimer.o -o $(BIN)/selectionsort.exe
	
mesaj1:
	@echo objeler olusturuluyor...

mesaj2:
	@echo objeler linkleniyor...
	