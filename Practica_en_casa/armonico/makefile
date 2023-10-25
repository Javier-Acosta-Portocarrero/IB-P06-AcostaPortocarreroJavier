CXX = g++
CXXFLAGS = -Wall

all: armonico 

armonico: armonico.o
	$(CXX) $(CXXFLAGS) -o armonico $<

armonico.o: armonico.cc
	$(CXX) $(CXXFLAGS) -c $<

clean:
	rm -f *.o
	rm -rf armonico 

cleano:
	rm -f *.o
