#include <iostream>
#include <vector>
#include <algorithm> // remove_if 사용을 위한 헤더 추가
#include <numeric>   // accumulate 사용

int main() {
    std::vector<int> numbers; // 정수를 저장할 벡터
    int input;

    std::cout << "숫자를 입력하세요: ";
    for (int i = 0; i < 5; ++i) {
        std::cin >> input;
        numbers.push_back(input); // 벡터에 정수 추가
    }

    // 초기 벡터 원소 출력
    std::cout << "초기 벡터 원소 : ";
    for (const auto& num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // 음수 삭제 (erase-remove idiom 사용)
    numbers.erase(std::remove_if(numbers.begin(), numbers.end(), [](int x) { return x < 0; }), numbers.end());

    // 음수 삭제 후 벡터 원소 출력
    std::cout << "음수를 삭제 후 벡터 원소 : ";
    for (const auto& num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // 평균값 계산
    double average = 0.0;
    if (!numbers.empty()) {
        average = static_cast<double>(std::accumulate(numbers.begin(), numbers.end(), 0)) / numbers.size();
    }

    std::cout << "평균값 : " << average << std::endl;

    return 0;
}

