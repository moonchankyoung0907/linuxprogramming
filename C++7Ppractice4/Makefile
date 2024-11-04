# Makefile
CXX = g++
CXXFLAGS = -Wall -g
TARGET = book
SRCS = book.cpp

# 빌드 규칙
all: $(TARGET)

$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRCS)

# 청소 규칙
clean:
	rm -f $(TARGET)

