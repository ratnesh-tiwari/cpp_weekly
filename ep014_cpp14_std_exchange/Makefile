CC      = g++ -Wall -Wpedantic -g -std=c++17
TARGET  = Exchange
SRC     = Exchange.cpp

ALL : $(TARGET)

$(TARGET): $(SRC)
	$(CC) -o $(TARGET) $(SRC)

.PHONY: clean
clean:
	rm -f $(TARGET)

.PHONY: run
run:
	./$(TARGET)
