CC      = g++ -Wall -Wpedantic -g -std=c++98
TARGET  = NegativeZero
SRC     = NegativeZero.cpp

ALL : $(TARGET)

$(TARGET): $(SRC)
	$(CC) -o $(TARGET) $(SRC)

.PHONY: clean
clean:
	rm -f $(TARGET)

.PHONY: run
run:
	./$(TARGET)
