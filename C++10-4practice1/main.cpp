#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> numbers(4);
    std::cout << "정수 4개를 입력하시오: ";
    for (int i = 0; i < 4; ++i) {
        std::cin >> numbers[i];
    }

    // 최대값과 최소값 탐색
    auto max_it = std::max_element(numbers.begin(), numbers.end());
    auto min_it = std::min_element(numbers.begin(), numbers.end());

    std::cout << "최대값은 " << (max_it - numbers.begin() + 1) << "번째 값 " << *max_it << std::endl;
    std::cout << "최소값은 " << (min_it - numbers.begin() + 1) << "번째 값 " << *min_it << std::endl;

    // 오름차순 정렬
    std::vector<int> ascending = numbers;
    std::sort(ascending.begin(), ascending.end());
    std::cout << "오름차순 결과는 ";
    for (size_t i = 0; i < ascending.size(); ++i) {
        std::cout << ascending[i];
        if (i != ascending.size() - 1) std::cout << ", ";
    }
    std::cout << std::endl;

    // 내림차순 정렬
    std::vector<int> descending = numbers;
    std::sort(descending.begin(), descending.end(), std::greater<int>());
    std::cout << "내림차순 결과는 ";
    for (size_t i = 0; i < descending.size(); ++i) {
        std::cout << descending[i];
        if (i != descending.size() - 1) std::cout << ", ";
    }
    std::cout << std::endl;

    return 0;
}

