# Makefile

# Compiler options
CXX = g++
CXXFLAGS = -Wall -Wextra -pedantic -std=c++11

# Source files
SOURCES = $(wildcard *.cpp)

# Object files
OBJECTS = $(SOURCES:.cpp=.o)

# Target
TARGET = output

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

clean:
	rm -f $(TARGET) $(OBJECTS)
