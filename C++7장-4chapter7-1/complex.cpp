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

    // 전위 증가 연산자 (++x): 실수부와 허수부를 각각 1씩 증가
    Complex& operator++() {
        ++real;
        ++img;
        return *this;
    }

    // 후위 감소 연산자 (x--): 실수부와 허수부를 각각 1씩 감소
    Complex operator--(int) {
        Complex temp = *this;
        real--;
        img--;
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

