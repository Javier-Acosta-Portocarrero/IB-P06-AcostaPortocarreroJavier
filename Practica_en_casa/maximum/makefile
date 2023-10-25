CXX = g++
CXXFLAGS = -Wall

all: maximum 

maximum: maximum.o
	$(CXX) $(CXXFLAGS) -o maximum $<

maximum.o: maximum.cc
	$(CXX) $(CXXFLAGS) -c $<

clean:
	rm -f *.o
	rm -rf maximum 

cleano:
	rm -f *.o
