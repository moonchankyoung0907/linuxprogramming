# 변수 정의
CXX = g++               # 컴파일러 설정
CXXFLAGS = -Wall -std=c++17  # 경고 메시지 활성화 및 C++17 표준 사용
TARGET = main           # 생성할 실행 파일 이름

# 기본 빌드 대상
all: $(TARGET)

# 실행 파일 생성 규칙
$(TARGET): main.cpp
	$(CXX) $(CXXFLAGS) -o $(TARGET) main.cpp

# 실행 규칙
run: all
	./$(TARGET)

# 정리 규칙 (생성된 실행 파일 삭제)
clean:
	rm -f $(TARGET)

