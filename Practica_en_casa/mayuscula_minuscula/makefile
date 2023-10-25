CXX = g++
CXXFLAGS = -Wall

all: mayuscula_minuscula 

mayuscula_minuscula: mayuscula_minuscula.o
	$(CXX) $(CXXFLAGS) -o mayuscula_minuscula $<

mayuscula_minuscula.o: mayuscula_minuscula.cc
	$(CXX) $(CXXFLAGS) -c $<

clean:
	rm -f *.o
	rm -rf mayuscula_minuscula 

cleano:
	rm -f *.o
