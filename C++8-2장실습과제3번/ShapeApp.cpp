#include <iostream>
using namespace std;

class Shape {
private:
    int x, y; // 좌표
public:
    Shape(int x, int y) : x(x), y(y) {
        cout << "Shape생성" << endl; // Shape 생성 메시지 출력
    }

    virtual void show() const = 0; // 순수 가상 함수
    virtual ~Shape() {
        cout << "Shape 소멸" << endl; // Shape 소멸 메시지 출력
    }

    int getX() const { return x; } // getter 함수
    int getY() const { return y; } // getter 함수
};

class Circle : public Shape {
private:
    int radius; // 반지름
public:
    Circle(int x, int y, int radius) : Shape(x, y), radius(radius) {
        cout << "Circle생성" << endl; // Circle 생성 메시지 출력
    }

    void show() const override {
        cout << "좌표 (" << getX() << "," << getY() << ")에 반지름 " << radius << "인 원" << endl;
    }

    ~Circle() {
        cout << "Circle 소멸" << endl; // Circle 소멸 메시지 출력
    }
};

class Rect : public Shape {
private:
    int width, height; // 폭과 높이
public:
    Rect(int x, int y, int width, int height) : Shape(x, y), width(width), height(height) {
        cout << "Rect 생성" << endl; // Rect 생성 메시지 출력
    }

    void show() const override {
        cout << "좌표 (" << getX() << "," << getY() << ")에 폭 " << width << ", 높이 " << height << "인 직사각형" << endl;
    }

    ~Rect() {
        cout << "Rect 소멸" << endl; // Rect 소멸 메시지 출력
    }
};

class Triangle : public Shape {
private:
    int base, height; // 밑변과 높이
public:
    Triangle(int x, int y, int base, int height) : Shape(x, y), base(base), height(height) {
        cout << "Triangle 생성" << endl; // Triangle 생성 메시지 출력
    }

    void show() const override {
        cout << "좌표 (" << getX() << "," << getY() << ")에 밑변 " << base << ", 높이 " << height << "인 삼각형" << endl;
    }

    ~Triangle() {
        cout << "Triangle 소멸" << endl; // Triangle 소멸 메시지 출력
    }
};

int main() {
    Circle x(0, 0, 2);
    Rect y(1, 1, 5, 10);
    Triangle z(2, 2, 5, 10);

    x.show();
    y.show();
    z.show();

    return 0;
}

