#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<std::string> words; // 문자열을 저장할 벡터
    std::string input;

    // 문자열 5개 입력받기
    for (int i = 0; i < 5; ++i) {
        std::cout << "문자열을 입력하세요: ";
        std::getline(std::cin, input); // 한 줄 입력받기
        words.push_back(input);        // 벡터에 추가
    }

    // 사전 순으로 제일 뒤에 오는 단어 찾기 (직접 구현)
    std::string max_word = words[0]; // 첫 번째 단어로 초기화

    for (const auto& word : words) {
        if (word > max_word) { // 사전 순으로 더 큰 단어를 찾으면
            max_word = word;   // max_word 갱신
        }
    }

    // 결과 출력
    std::cout << "사전에서 제일 뒤에 나오는 단어는 " << max_word << " 입니다" << std::endl;

    return 0;
}
