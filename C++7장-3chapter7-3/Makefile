# 컴파일러 설정
CXX = g++
# 컴파일 옵션 설정
CXXFLAGS = -std=c++11 -Wall

# 실행 파일 이름
TARGET = power

# 소스 파일
SRCS = power.cpp

# 오브젝트 파일
OBJS = $(SRCS:.cpp=.o)

# 기본 빌드 명령
all: $(TARGET)

# 실행 파일 빌드 규칙
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

# 오브젝트 파일 빌드 규칙
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# 실행 규칙
run: $(TARGET)
	./$(TARGET)

# 클린 규칙 (생성된 파일 삭제)
clean:
	rm -f $(TARGET) $(OBJS)

