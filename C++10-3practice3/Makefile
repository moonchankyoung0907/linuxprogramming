# 컴파일러 및 플래그 설정
CXX = g++
CXXFLAGS = -std=c++17 -Wall -O2

# 대상 파일
TARGET = main
SRC = main.cpp

# 기본 규칙
all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

# 실행 규칙
run: all
	./$(TARGET)

# 청소 규칙
clean:
	rm -f $(TARGET)

