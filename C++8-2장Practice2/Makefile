# 컴파일러와 컴파일 옵션 설정
CXX = g++
CXXFLAGS = -std=c++17 -Wall

# 실행 파일 이름을 Circle로 설정
TARGET = Circle

# 소스 파일 목록 (main.cpp를 Circle.cpp로 변경)
SRCS = Circle.cpp

# 오브젝트 파일 목록
OBJS = $(SRCS:.cpp=.o)

# 기본 타겟
all: $(TARGET)

# 실행 파일 생성
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# 오브젝트 파일 생성
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# 클린업
clean:
	rm -f $(TARGET) $(OBJS)

# 실행 후 결과물 삭제
run: $(TARGET)
	./$(TARGET)

