CC      = g++ -Wall -Wpedantic -g -std=c++11
TARGET  = AsyncFuture
SRC     = AsyncFuture.cpp

ALL : $(TARGET)

$(TARGET): $(SRC)
	$(CC) -o $(TARGET) $(SRC)

.PHONY: clean
clean:
	rm -f $(TARGET)

.PHONY: run
run:
	./$(TARGET)
