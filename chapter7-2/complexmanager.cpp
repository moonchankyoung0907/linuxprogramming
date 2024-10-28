#include <iostream>
using namespace std;

class Complex {
public:
    double real;  // 실수부
    double imag;  // 허수부

    // 생성자
    Complex(double r = 0, double i = 0) : real(r), imag(i) {
        // 복소수 생성 시 출력
        cout << "복소수 " << real << " + " << imag << "j 생성" << endl;
    }

    // show 멤버 함수
    void show() const {
        cout << real << " + " << imag << "j" << endl;
    }
};

class ComplexManager {
public:
    // 두 복소수를 더하는 멤버 함수
    Complex ComplexAdd(const Complex& x, const Complex& y) {
        // 합계 계산 후 복소수 생성
        return Complex(x.real + y.real, x.imag + y.imag);
    }
};

int main() {
    Complex x(2, 3), y(-5, 10);  // 복소수 x와 y 생성
    Complex sum;                 // 기본 생성자로 sum 생성 (0 + 0j)
    ComplexManager man;          // ComplexManager 객체 생성

    sum = man.ComplexAdd(x, y); // 복소수의 합 계산

    // 복소수의 합 출력
    cout << "두 복소수의 합은 ";
    sum.show();  // 결과 출력

    return 0;
}

