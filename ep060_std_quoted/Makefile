CC      = g++ -Wall -Wpedantic -g -std=c++14
TARGET  = Quoted
SRC     = Quoted.cpp

ALL : $(TARGET)

$(TARGET): $(SRC)
	$(CC) -o $(TARGET) $(SRC)

.PHONY: clean
clean:
	rm -f $(TARGET)

.PHONY: run
run:
	./$(TARGET)
