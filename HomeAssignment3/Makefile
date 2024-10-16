all: app

app: main.o transformer.o autobot.o decepticon.o minicon.o
	g++ main.o transformer.o autobot.o decepticon.o minicon.o -o app

main.o: main.cpp
	g++ -c main.cpp

transformer.o: transformer.cpp
	g++ -c transformer.cpp

autobot.o:
	g++ -c autobot.cpp

decepticon.o:
	g++ -c decepticon.cpp

minicon.o:
	g++ -c minicon.cpp

clean:
	rm -rf *.o app