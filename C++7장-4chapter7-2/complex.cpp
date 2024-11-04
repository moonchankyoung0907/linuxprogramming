#include <iostream>
using namespace std;

class Complex {
private:
    int real; // 실수부
    int img;  // 허수부

public:
    // 생성자: 실수부와 허수부 초기화 및 생성 메시지 출력
    Complex(int r = 0, int i = 0) : real(r), img(i) {
        cout << "복소수 " << real << "+ " << img << "j 생성" << endl;
    }

    // 전위 증가 연산자 (++x)를 프렌드 함수로 구현
    friend Complex& operator++(Complex& c) {
        ++c.real;
        ++c.img;
        return c;
    }

    // 후위 감소 연산자 (x--)를 프렌드 함수로 구현
    friend Complex operator--(Complex& c, int) {
        Complex temp = c;
        c.real--;
        c.img--;
        return temp;
    }

    // show 함수: 복소수의 실수부와 허수부를 출력
    void show() const {
        cout << real << "+ " << img << "j" << endl;
    }
};

int main() {
    Complex x(2, 3);    // 복소수 2+3j 생성
    ++x;                // 전위 증가 연산
    cout << "증가결과 ";
    x.show();           // 증가된 값 출력
    x--;                // 후위 감소 연산
    cout << "감소결과 ";
    x.show();           // 감소된 값 출력
    return 0;
}

