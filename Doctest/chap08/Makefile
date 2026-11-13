CXX = g++
CXXFLAGS = -Wall -Wextra -pedantic -std=c++17 -I.

TARGETS = anp str_len swaps talkin_trash

all: $(TARGETS)

anp: anp.o
	$(CXX) $(CXXFLAGS) -o $@ $^

anp.o: anp.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

talkin_trash: talkin_trash.o
	$(CXX) $(CXXFLAGS) -o $@ $^

talkin_trash.o: talkin_trash.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

str_len: str_len.o
	$(CXX) $(CXXFLAGS) -o $@ $^

str_len.o: str_len.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

swaps: swaps.o
	$(CXX) $(CXXFLAGS) -o $@ $^

swaps.o: swaps.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(TARGETS) *.o

.PHONY: all clean
