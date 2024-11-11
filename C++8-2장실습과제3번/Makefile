# 컴파일러 설정
CXX = g++                    # C++ 컴파일러
CXXFLAGS = -Wall -std=c++11   # 컴파일 옵션: 경고 출력, C++11 표준 사용

# 실행 파일 이름
TARGET = ShapeApp             # 실행 파일 이름을 ShapeApp으로 설정

# 소스 파일
SRCS = ShapeApp.cpp           # 소스 파일 이름을 ShapeApp.cpp로 설정

# 객체 파일
OBJS = ShapeApp.o             # 객체 파일 이름을 ShapeApp.o로 설정

# 최종 실행 파일을 생성하는 규칙
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

# ShapeApp.cpp를 ShapeApp.o로 컴파일하는 규칙
ShapeApp.o: ShapeApp.cpp
	$(CXX) $(CXXFLAGS) -c ShapeApp.cpp -o ShapeApp.o

# 빌드된 파일들을 삭제하는 규칙
clean:
	rm -f $(TARGET) $(OBJS)

