#include <iostream>
using namespace std;

class Complex {
private:
    int real, img;

public:
    // 생성자
    Complex(int r = 0, int i = 0) : real(r), img(i) {
        cout << "복소수 " << real << "+" << img << "j 생성" << endl;
    }

    // 복소수 덧셈을 위한 함수
    void ComplexAdd(const Complex& other) {
        real += other.real;
        img += other.img;
    }

    // 복소수 출력 함수
    void show() const {
        cout << real << "+" << img << "j" << endl;
    }
};

int main() {
    Complex x(2, 3), y(-5, 10), sum;
    sum.ComplexAdd(x);
    sum.ComplexAdd(y);
    cout << "두 복소수의 합은 ";
    sum.show();
    return 0;
}

