CC      = g++ -Wall -Wpedantic -g -std=c++17
TARGET  = Constexpr_Lambda_Support
SRC     = Constexpr_Lambda_Support.cpp

ALL : $(TARGET)

$(TARGET): $(SRC)
	$(CC) -o $(TARGET) $(SRC)

.PHONY: clean
clean:
	rm -f $(TARGET)

.PHONY: run
run:
	./$(TARGET)
