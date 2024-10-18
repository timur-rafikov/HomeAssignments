all: app

app: main.o transformer.o autobot.o decepticon.o minicon.o
	g++ -g main.o transformer.o autobot.o decepticon.o minicon.o -o app

main.o: main.cpp transformer.hpp autobot.hpp decepticon.hpp minicon.hpp
	g++ -c -g main.cpp

transformer.o: transformer.cpp transformer.hpp
	g++ -c -g transformer.cpp

autobot.o: autobot.cpp autobot.hpp transformer.hpp
	g++ -c -g autobot.cpp

decepticon.o: decepticon.cpp decepticon.hpp transformer.hpp
	g++ -c -g decepticon.cpp

minicon.o: minicon.cpp minicon.hpp transformer.hpp
	g++ -c -g minicon.cpp

clean:
	rm -rf *.o app
