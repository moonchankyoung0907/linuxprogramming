# 컴파일러 설정
CXX = g++
CXXFLAGS = -Wall -std=c++17

# 실행 파일 이름
TARGET = main

# 타겟 생성 규칙
all: $(TARGET)

$(TARGET): main.cpp
	$(CXX) $(CXXFLAGS) -o $(TARGET) main.cpp

# 실행 규칙
run: $(TARGET)
	./$(TARGET)

# 정리 규칙
clean:
	rm -f $(TARGET)

