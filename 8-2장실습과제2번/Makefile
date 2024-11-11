# 컴파일러 설정
CXX = g++                    # C++ 컴파일러
CXXFLAGS = -Wall -std=c++11   # 컴파일 옵션: 경고 출력, C++11 표준 사용

# 실행 파일 이름
TARGET = SmartTV

# 소스 파일
SRCS = SmartTV.cpp            # SmartTV.cpp 파일 사용

# 객체 파일
OBJS = SmartTV.o              # 객체 파일 이름을 SmartTV.o로 변경

# 최종 실행 파일을 생성하는 규칙
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

# SmartTV.cpp를 SmartTV.o로 컴파일하는 규칙
SmartTV.o: SmartTV.cpp
	$(CXX) $(CXXFLAGS) -c SmartTV.cpp -o SmartTV.o

# 빌드된 파일들을 삭제하는 규칙
clean:
	rm -f $(TARGET) $(OBJS)

