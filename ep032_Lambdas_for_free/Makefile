CC      = g++ -Wall -Wpedantic -g -std=c++17
TARGET  = LambdasForFree
SRC     = LambdasForFree.cpp

ALL : $(TARGET)

$(TARGET): $(SRC)
	$(CC) -o $(TARGET) $(SRC)

.PHONY: clean
clean:
	rm -f $(TARGET)

.PHONY: run
run:
	./$(TARGET)
