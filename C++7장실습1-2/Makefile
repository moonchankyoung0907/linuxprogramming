# Makefile for compiling book.cpp into the executable book

# 사용할 컴파일러 지정
CXX = g++
# 컴파일 시 사용할 플래그
CXXFLAGS = -Wall -g

# 생성할 실행 파일 이름
TARGET = book
# 소스 파일 목록
SRCS = book.cpp

# 기본 목표
all: $(TARGET)

# 실행 파일을 만드는 규칙
$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRCS)

# 실행 파일을 삭제하는 규칙
clean:
	rm -f $(TARGET)


