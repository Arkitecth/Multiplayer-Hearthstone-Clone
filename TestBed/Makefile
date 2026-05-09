CXX=g++

ENGINE_PATH=$(HOME)/Development/projects/mhs/Engine

LIBS=-lhearthEngine

CXXFLAGS= -Wall -Wextra

INC_SDL=`pkg-config --libs sdl3 --cflags sdl3`

INCFLAGS= -I$(ENGINE_PATH)

LDFLAGS= -L$(ENGINE_PATH) -Wl,-rpath,$(ENGINE_PATH) 

EXE=test

main: 
	$(CXX) $(INCFLAGS) $(INC_SDL) $(CXXFLAGS) $(LDFLAGS) $(LIBS) main.cpp -o $(EXE)
