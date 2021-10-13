main.exe:libSharedAdd.so libSharedSub.so
	g++ main.cpp -ldl -o main.exe -I./ -std=c++0x

libSharedAdd.so:
	g++ -std=c++11 -fPIC -shared -o libSharedAdd.so add.cpp

libSharedSub.so:
	g++ -std=c++11 -fPIC -shared -o libSharedSub.so sub.cpp
clean:
	rm -f *.exe *.o *.so 

all: clean main.exe