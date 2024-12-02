# 컴파일러 설정
CXX = g++
CXXFLAGS = -std=c++11 -Wall

# 실행 파일 이름
TARGET = main

# 빌드 규칙
all: $(TARGET)

$(TARGET): main.cpp
	$(CXX) $(CXXFLAGS) -o $(TARGET) main.cpp

# 정리 규칙
clean:
	rm -f $(TARGET)

