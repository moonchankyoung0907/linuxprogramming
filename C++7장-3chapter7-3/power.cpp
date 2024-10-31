#include <iostream>
using namespace std;

class Power {
private:
    int kick;   // kick 멤버 변수
    int punch;  // punch 멤버 변수

public:
    // 생성자: kick과 punch를 초기화합니다.
    Power(int k = 0, int p = 0) : kick(k), punch(p) {}

    // show 함수: 현재 kick과 punch 값을 출력합니다.
    void show() const {
        cout << "kick=" << kick << ",punch=" << punch << endl;
    }

    // - 연산자 오버로딩: Power 객체와 정수의 뺄셈을 수행합니다.
    Power operator-(int value) const {
        return Power(kick - value, punch - value);
    }
};

int main() {
    Power a(3, 5), b;  // Power 객체 a를 생성하고 초기화
    a.show();          // a의 값 출력
    b.show();          // b의 값 출력 (기본값인 0으로 초기화됨)
    b = a - 2;        // a에서 2를 빼서 b에 저장
    a.show();          // a의 값 출력
    b.show();          // b의 값 출력
    return 0;
}

