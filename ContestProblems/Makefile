CXX = g++
CXXFLAGS = -Wall -Wextra -pedantic -std=c++17 -I.

TARGETS = error_detection

all: $(TARGETS)

error_detection: error_detection.o
	$(CXX) $(CXXFLAGS) -o $@ $^

error_detection.o: error_detection.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(TARGETS) *.o

.PHONY: all clean