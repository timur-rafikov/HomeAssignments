all: app

app: main.o transformer.o autobot.o decepticon.o minicon.o blade.o blaster.o instrument.o
	g++ -g main.o transformer.o autobot.o decepticon.o minicon.o blade.o blaster.o instrument.o -o app

main.o: main.cpp transformer.hpp autobot.hpp decepticon.hpp minicon.hpp blade.hpp blaster.hpp instrument.hpp
	g++ -c -g main.cpp

transformer.o: transformer.cpp transformer.hpp
	g++ -c -g transformer.cpp

autobot.o: autobot.cpp autobot.hpp transformer.hpp blaster.hpp
	g++ -c -g autobot.cpp

decepticon.o: decepticon.cpp decepticon.hpp transformer.hpp blade.hpp
	g++ -c -g decepticon.cpp

minicon.o: minicon.cpp minicon.hpp transformer.hpp instrument.hpp
	g++ -c -g minicon.cpp

blade.o: blade.cpp
	g++ -c -g blade.cpp

blaster.o: blaster.cpp
	g++ -c -g blaster.cpp

instrument.o: instrument.cpp
	g++ -c -g instrument.cpp

clean:
	rm -rf *.o app