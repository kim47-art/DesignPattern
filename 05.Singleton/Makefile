main.exe:Singleton.o
	g++ main.cpp Singleton.o -o main.exe -I./ -std=c++0x
Singleton.o:
	g++ -c Singleton.cpp -o Singleton.o  -I./ -std=c++0x
clean:
	rm -f *.exe *.o

all: clean main.exe