#include <iostream>
using namespace std;

class Complex {
private:
    int real;   // 실수부
    int img;    // 허수부

public:
    // 기본 생성자
    Complex(int r = 0, int i = 0) : real(r), img(i) {}

    // + 연산자 오버로딩
    Complex operator+(const Complex &other) {
        return Complex(real + other.real, img + other.img);
    }

    // 결과 출력 함수
    void show() const {
        cout << real << (img >= 0 ? "+" : "") << img << "j" << endl;
    }
};

int main() {
    Complex x(2, 3), y(-5, 10), sum;
    sum = x + y;
    cout << "두 복소수의 합은 ";
    sum.show();
    return 0;
}

