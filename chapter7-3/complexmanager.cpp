#include <iostream>
using namespace std;

class Complex {
public:
    double real;  // 실수부
    double imag;  // 허수부

    // 생성자
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}

    // show 멤버 함수
    void show() const {
        cout << real << (imag >= 0 ? "+" : "") << imag << "j" << endl;  // 허수부 출력 시 부호 처리
    }
};

class ComplexManager {
public:
    // 두 복소수를 더하는 멤버 함수
    Complex ComplexAdd(const Complex& x, const Complex& y) {
        return Complex(x.real + y.real, x.imag + y.imag);
    }

    // 두 복소수를 빼는 멤버 함수
    Complex ComplexSub(const Complex& x, const Complex& y) {
        return Complex(x.real - y.real, x.imag - y.imag);
    }
};

int main() {
    Complex x(5, 5), y(2, 2), sum, sub;  // 복소수 x, y 및 합, 차 객체 생성
    ComplexManager man;                  // ComplexManager 객체 생성

    sum = man.ComplexAdd(x, y);          // 두 복소수의 합 계산
    sub = man.ComplexSub(x, y);          // 두 복소수의 차 계산

    // 결과 출력
    cout << "두 복소수의 합은 ";
    sum.show();                          // 합 출력
    cout << "두 복소수의 차는 ";
    sub.show();                          // 차 출력

    return 0;
}

