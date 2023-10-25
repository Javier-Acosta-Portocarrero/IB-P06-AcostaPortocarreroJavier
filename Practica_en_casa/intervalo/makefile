CXX = g++
CXXFLAGS = -Wall

all: intervalo

intervalo: intervalo.o
	$(CXX) $(CXXFLAGS) -o intervalo $<

intervalo.o: intervalo.cc
	$(CXX) $(CXXFLAGS) -c $<

clean:
	rm -f *.o
	rm -rf intervalo

cleano:
	rm -f *.o
