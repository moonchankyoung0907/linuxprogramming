# Makefile for complex program

# 컴파일러
CXX = g++

# 컴파일 옵션
CXXFLAGS = -Wall -g

# 실행 파일 이름
TARGET = complex

# 컴파일 대상 파일
SRCS = complex.cpp
OBJS = $(SRCS:.cpp=.o)

# 빌드 규칙
all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# 개별 파일 컴파일 규칙
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $<

# clean 규칙 (빌드 파일 삭제)
clean:
	rm -f $(OBJS) $(TARGET)

