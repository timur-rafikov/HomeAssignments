all: app

app: main.o transformer.o autobot.o
	g++ main.o transformer.o autobot.o -o app

main.o: main.cpp
	g++ -c main.cpp

transformer.o: transformer.cpp
	g++ -c transformer.cpp

autobot.o:
	g++ -c autobot.cpp

clean:
	rm -rf *.o app