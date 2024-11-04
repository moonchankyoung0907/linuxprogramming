#include <iostream>
using namespace std;

class Power {
private:
    int kick;   // 첫 번째 값
    int punch;  // 두 번째 값

public:
    // 생성자
    Power(int k = 0, int p = 0) : kick(k), punch(p) {}

    // show 함수: kick과 punch의 값을 출력
    void show() const {
        cout << "kick=" << kick << ",punch=" << punch << endl;
    }

    // 정수와 Power 객체의 곱셈 연산자 오버로딩
    friend Power operator*(int factor, const Power& p) {
        return Power(factor * p.kick, factor * p.punch);
    }
};

int main() {
    Power a(3, 5), b;   // a는 kick=3, punch=5로 초기화, b는 기본값(0, 0)
    a.show();           // a 출력
    b.show();           // b 출력
    b = 2 * a;          // 정수와 Power 객체의 곱셈
    a.show();           // a 출력
    b.show();           // b 출력
    return 0;
}

