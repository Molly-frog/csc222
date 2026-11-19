CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17 -g
TARGET = error_detection
SRC = error_detection.cpp

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)

.PHONY: all run clean
