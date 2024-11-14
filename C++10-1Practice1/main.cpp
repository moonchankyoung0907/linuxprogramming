#include <iostream>
using namespace std;

// 템플릿 함수 getmax: 배열 data에서 n개의 원소 중 최대값을 리턴
template <class T>
T getmax(T data[], int n) {
    T max = data[0]; // 최대값을 배열의 첫 번째 원소로 초기화
    for (int i = 1; i < n; i++) { // 배열의 각 원소와 비교하여 최대값 갱신
        if (data[i] > max) {
            max = data[i];
        }
    }
    return max; // 최대값 리턴
}

int main() {
    int a[5] = {-5, 10, 30, 20, 6}; // 정수 배열 a
    double b[4] = {3.14, 1.5, -6.0, 0.5}; // 실수 배열 b
    char c[3] = {'a', 'x', 'p'}; // 문자 배열 c

    // 각 배열에 대해 최대값을 계산하고 출력
    cout << "정수배열의 최대값은 " << getmax(a, 5) << endl;
    cout << "실수배열의 최대값은 " << getmax(b, 4) << endl;
    cout << "문자배열의 최대값은 " << getmax(c, 3) << endl;

    return 0;
}

