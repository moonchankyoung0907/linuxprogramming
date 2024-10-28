# 컴파일러 및 플래그 설정
CXX = g++
CXXFLAGS = -Wall -g

# 타겟 및 소스 파일 설정
TARGET = complexmanager
SOURCES = complexmanager.cpp
OBJECTS = $(SOURCES:.cpp=.o)

# 최종 타겟
$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# .o 파일 생성 규칙
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $<

# 클린 규칙 (생성된 파일 삭제)
clean:
	rm -f $(TARGET) $(OBJECTS)

