all: app

app: main.o sayhello.o
	g++ main.o sayhello.o -o app

main.o: main.cpp
	g++ -c main.cpp

sayhello.o: sayhello.cpp
	g++ -c sayhello.cpp

clean:
	rm -rf *.o app
