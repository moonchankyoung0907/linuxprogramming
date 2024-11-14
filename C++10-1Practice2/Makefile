# Compiler 설정
CXX = g++                 # C++ 컴파일러 g++
CXXFLAGS = -Wall -std=c++11 # 경고 표시 및 C++11 표준 사용 옵션

# Executable 파일 이름
TARGET = power            # 실행 파일 이름

# Source 파일
SRC = main.cpp            # 소스 파일 main.cpp

# $(TARGET) 빌드 규칙: main.cpp를 컴파일하여 power 실행 파일 생성
$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

# Clean 규칙: 실행 파일 삭제
clean:
	rm -f $(TARGET)    # 실행 파일 및 기타 임시 파일 삭제

