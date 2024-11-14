#include <iostream>
using namespace std;

class Circle {
    int radius;
public:
    Circle(int radius = 1) { this->radius = radius; } // 생성자
    int getRadius() { return radius; } // 반지름 반환 함수

    // > 연산자 오버로딩: 반지름을 기준으로 Circle 객체 간 비교 가능
    bool operator>(const Circle& other) {
        return this->radius > other.radius;
    }
};

// 템플릿 함수 bigger: 두 매개변수 중 큰 값을 반환
template <class T>
T bigger(T a, T b) { 
    if (a > b) return a;
    else return b;
}

int main() {
    int a = 20, b = 50, c;
    c = bigger(a, b); // 정수 a와 b 비교
    cout << "20과 50중 큰 값은 " << c << endl;

    Circle donut(10), pizza(20), y;
    y = bigger(donut, pizza); // Circle 객체 donut과 pizza 비교
    cout << "donut과 pizza중 큰 반지름은 " << y.getRadius() << endl;

    return 0;
}

