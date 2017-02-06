#Makefile for BOOM

CXXFLAGS = -std=c++11

all: main.o

debug: CXXFLAGS += -g
debug: main.o

main.o: main.cpp puzzle.h fuse.h fuse.cpp puzzle.cpp
	$(CXX) $(CXXFLAGS) -c main.cpp


clean:
	rm -f * .o a.out