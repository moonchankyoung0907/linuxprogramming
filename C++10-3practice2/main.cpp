#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers; // 정수를 저장할 벡터
    int input;

    std::cout << "정수 4개를 입력하시오: ";

    // 정수 4개 입력받아 벡터에 추가
    for (int i = 0; i < 4; ++i) {
        std::cin >> input;
        numbers.push_back(input); // 벡터에 값 추가
    }

    // 벡터에서 최대값과 최소값 찾기 (알고리즘 헤더 없이 직접 구현)
    int max_value = numbers[0];
    int min_value = numbers[0];

    for (int num : numbers) {
        if (num > max_value) {
            max_value = num;
        }
        if (num < min_value) {
            min_value = num;
        }
    }

    // 결과 출력
    std::cout << "최대값은 " << max_value << ", 최소값은 " << min_value << "입니다." << std::endl;

    return 0;
}

