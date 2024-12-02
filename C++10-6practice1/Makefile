# 변수 정의
CXX = g++
CXXFLAGS = -Wall -std=c++17
TARGET = main

# 기본 빌드 대상
all: $(TARGET)

# 실행 파일 생성
$(TARGET): main.cpp
	$(CXX) $(CXXFLAGS) -o $(TARGET) main.cpp

# 실행
run: all
	./$(TARGET)

# 정리
clean:
	rm -f $(TARGET)

