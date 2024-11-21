#include <iostream>
#include <vector>
#include <string>
#include <algorithm> // max_element 사용

int main() {
    std::vector<std::string> words; // 문자열을 저장할 벡터
    std::string input;

    // 문자열 5개 입력받기
    for (int i = 0; i < 5; ++i) {
        std::cout << "문자열을 입력하세요: ";
        std::getline(std::cin, input); // 한 줄 입력받기
        words.push_back(input);        // 벡터에 추가
    }

    // 사전 순으로 제일 뒤에 오는 단어 찾기
    auto max_word = *std::max_element(words.begin(), words.end());

    // 결과 출력
    std::cout << "사전에서 제일 뒤에 나오는 단어는 " << max_word << " 입니다" << std::endl;

    return 0;
}

