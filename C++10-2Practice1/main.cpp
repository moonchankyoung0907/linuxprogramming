#include <iostream>
using namespace std;

// 템플릿 클래스 GClass 선언 및 구현
template <class T1, class T2>
class GClass {
    T1 data1; // 첫 번째 데이터 멤버
    T2 data2; // 두 번째 데이터 멤버
public:
    GClass() : data1{}, data2{} {} // 기본 생성자, 멤버를 초기화
    void set(T1 a, T2 b);          // 두 데이터 멤버 설정
    void get(T1& a, T2& b);        // 두 데이터 멤버 값을 가져옴
    void swap();                   // 두 데이터 멤버를 교환
};

// set 함수 정의: 멤버 변수 값을 설정
template <class T1, class T2>
void GClass<T1, T2>::set(T1 a, T2 b) {
    data1 = a;
    data2 = b;
}

// get 함수 정의: 멤버 변수 값을 참조로 반환
template <class T1, class T2>
void GClass<T1, T2>::get(T1& a, T2& b) {
    a = data1;
    b = data2;
}

// swap 함수 정의: 두 멤버 변수의 값을 교환
template <class T1, class T2>
void GClass<T1, T2>::swap() {
    T1 temp = data1; // 임시 변수를 사용해 data1과 data2를 교환
    data1 = data2;
    data2 = temp;
}

int main() {
    // 첫 번째 예제: 정수형 데이터를 사용하는 GClass 객체
    int a, b;
    GClass<int, int> x; // GClass<int, int> 객체 생성
    x.set(2, 5);        // 객체에 값 설정
    x.get(a, b);        // 설정된 값을 가져옴
    cout << "a=" << a << '\t' << "b=" << b << endl;

    x.swap();           // 두 멤버 변수의 값을 교환
    x.get(a, b);        // 교환된 값을 가져옴
    cout << "a=" << a << '\t' << "b=" << b << endl;

    // 두 번째 예제: 실수형 데이터를 사용하는 GClass 객체
    float c, d;
    GClass<float, float> y;
