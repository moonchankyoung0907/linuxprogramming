#include <iostream>
#include <string>
using namespace std;

// Circle 클래스 정의
class Circle {
    int radius;
public:
    Circle(int radius = 0) : radius(radius) {}
    int getRadius() { return radius; }
    void setRadius(int radius) { this->radius = radius; }
    double getArea() { return 3.14 * radius * radius; }
};

// NamedCircle 클래스 정의
class NamedCircle : public Circle {
    string name;
public:
    NamedCircle(int radius, string name) : Circle(radius), name(name) {}
    void show() {
        cout << "반지름이 " << getRadius() << "인 " << name << endl;
    }
};

// main 함수
int main() {
    // NamedCircle 객체 생성
    NamedCircle waffle(3, "waffle");

    // 객체의 show() 함수 호출
    waffle.show();

    // 다른 예시로 Circle 객체 생성
    Circle circle1(5);
    cout << "Circle의 면적: " << circle1.getArea() << endl;

    return 0;
}

