SRC=./src
LIB=./lib
INC= -I ./include/
BIN=./bin
all:mesaj1 bubble.o ctimer.o mesaj2 link
	
ctimer.o:
	@g++ -c $(SRC)/ctimer.cpp $(INC) -o $(LIB)/ctimer.o
bubble.o:
	@g++ -c $(SRC)/bubble.cpp $(INC) -o $(LIB)/bubble.o	
link:
	@g++ $(LIB)/bubble.o $(LIB)/ctimer.o -o $(BIN)/bubble.exe
	
mesaj1:
	@echo objeler olusturuluyor...

mesaj2:
	@echo objeler linkleniyor...
	