SRC=./src
LIB=./lib
INC= -I ./include/
BIN=./bin
all:mesaj1 heapsort.o ctimer.o mesaj2 link
	
ctimer.o:
	@g++ -c $(SRC)/ctimer.cpp $(INC) -o $(LIB)/ctimer.o
heapsort.o:
	@g++ -c $(SRC)/heapsort.cpp $(INC) -o $(LIB)/heapsort.o	
link:
	@g++ $(LIB)/heapsort.o $(LIB)/ctimer.o -o $(BIN)/heapsort.exe
	
mesaj1:
	@echo objeler olusturuluyor...

mesaj2:
	@echo objeler linkleniyor...
	