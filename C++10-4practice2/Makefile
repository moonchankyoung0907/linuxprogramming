# Compiler and flags
CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra

# Target executable
TARGET = main

# Build target
all: $(TARGET)

$(TARGET): main.cpp
	$(CXX) $(CXXFLAGS) -o $(TARGET) main.cpp

# Clean up build artifacts
clean:
	rm -f $(TARGET)

