CXX=g++

ENGINE_PATH=$(HOME)/Development/projects/mhs/Engine

LIBS=-lhearthEngine

CXXFLAGS= -Wall -Wextra

LDFLAGS= -L$(ENGINE_PATH) -Wl,-rpath,$(ENGINE_PATH) 

EXE=test

main: 
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $(LIBS) main.cpp -o $(EXE)
