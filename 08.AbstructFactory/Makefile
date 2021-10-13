main.exe:libTableFactory.so
	g++ main.cpp -ldl -o main.exe  -std=c++0x

libTableFactory.so:
	g++ -std=c++11 -fPIC -shared -I./ -o libTableFactory.so libTableFactory/TableFactory.cpp

clean:
	rm -f *.exe *.o *.so 

all: clean main.exe