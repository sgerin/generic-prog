CXX=g++
CFLAGS=-Wall -ggdb
BIN=prog

SRC=$(wildcard *.cpp)
OBJ=$(SRC:%.cpp=%.o)

all: $(OBJ)
	$(CXX) -o $(BIN) $^

%.o: %.c
	$(CXX) -o $@ -c $< $(CFLAGS)

clean:
	rm -f *.o
	rm $(BIN)

