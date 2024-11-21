#include <iostream>
#include <vector>

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

    // 벡터에서 음수 삭제 (erase만 사용)
    for (auto it = numbers.begin(); it != numbers.end(); ) {
        if (*it < 0) {
            it = numbers.erase(it); // 음수인 요소 삭제하고 그 위치의 다음 요소로 이동
        } else {
            ++it; // 음수가 아닌 경우 다음 요소로 이동
        }
    }

    // 음수 삭제 후 벡터 원소 출력
    std::cout << "음수를 삭제 후 벡터 원소 : ";
    for (const auto& num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // 평균값 계산
    double average = 0.0;
    int sum = 0;
    if (!numbers.empty()) {
        for (const auto& num : numbers) {
            sum += num; // 벡터 원소 합 계산
        }
        average = static_cast<double>(sum) / numbers.size(); // 평균 계산
    }

    std::cout << "평균값 : " << average << std::endl;

    return 0;
}
