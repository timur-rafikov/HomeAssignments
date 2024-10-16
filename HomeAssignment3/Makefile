all: app

app: main.o transformer.o
	g++ main.o transformer.o -o app

main.o: main.cpp
	g++ -c main.cpp

transformer.o: transformer.cpp
	g++ -c transformer.cpp

clean:
	rm -rf *.o app