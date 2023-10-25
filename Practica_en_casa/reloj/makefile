CXX = g++
CXXFLAGS = -Wall

all: reloj 

reloj: reloj.o
	$(CXX) $(CXXFLAGS) -o reloj $<

reloj.o: reloj.cc
	$(CXX) $(CXXFLAGS) -c $<

clean:
	rm -f *.o
	rm -rf reloj 

cleano:
	rm -f *.o
