CXX=g++

CXXFLAGS=-std=c++17 -Wall -g

ENGINE_SRC=$(HOME)/Development/projects/mhs/Engine

LIB=libhearthEngine.dylib

INC_SDL=`pkg-config --libs sdl3 --cflags sdl3`

LDFLAGS= -dynamiclib -install_name $(ENGINE_SRC)/$(LIB)

FILES=$(shell find . -name '*.cpp')

netEngine:
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $(INC_SDL) $(FILES) -o $(LIB) 

clean: 
	rm -rf *.dSYM *.dylib
