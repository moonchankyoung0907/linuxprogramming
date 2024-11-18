# C++ 컴파일러 설정
CXX = g++                 # 사용할 컴파일러: g++
CXXFLAGS = -std=c++17 -Wall -Wextra  # 컴파일 옵션: C++17 표준, 경고 활성화

# 최종 실행 파일 이름
TARGET = main             # 생성될 실행 파일 이름

# 소스 파일
SRC = main.cpp            # 컴파일할 소스 파일

# 빌드 기본 규칙 (make만 입력했을 때 실행)
all: $(TARGET)            # 'all'은 기본 타겟으로 실행 파일을 생성

# 실행 파일 생성 규칙
$(TARGET): $(SRC)         # 소스 파일을 실행 파일로 컴파일
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC) # 컴파일러 명령어

# clean 규칙: 빌드 파일 삭제
clean:                    # 'make clean'을 실행하면 아래 명령어 실행
	rm -f $(TARGET)       # 실행 파일 삭제 (-f 옵션: 파일 없을 때 에러 방지)
