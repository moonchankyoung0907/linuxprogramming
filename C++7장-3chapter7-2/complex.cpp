#include <iostream>
using namespace std;

// 복소수(Complex) 클래스를 정의
class Complex {
private:
    int real;   // 실수부
    int img;    // 허수부

public:
    // 생성자: 초기 실수부와 허수부 값을 설정합니다. 기본값은 0입니다.
    Complex(int r = 0, int i = 0) : real(r), img(i) {}

    // * 연산자 오버로딩: 두 복소수 객체의 곱을 계산합니다.
    Complex operator*(const Complex &other) {
        int new_real = real * other.real - img * other.img;  // 실수부 계산
        int new_img = real * other.img + img * other.real;   // 허수부 계산
        return Complex(new_real, new_img);  // 새로운 Complex 객체 반환
    }

    // 복소수 출력 함수: "a+bj" 형태로 복소수를 출력합니다.
    void show() const {
        cout << real << (img >= 0 ? "+" : "") << img << "j" << endl;
    }
};

int main() {
    // 두 개의 복소수 객체 x와 y를 생성하고 초기화합니다.
    Complex x(2, 3), y(-5, 10), sum;

    // 복소수 곱셈: x와 y를 곱한 결과를 sum에 저장합니다.
    sum = x * y;

    // 결과 출력
    cout << "두 복소수의 곱은 ";
    sum.show();

    return 0;  // 프로그램 종료
}

