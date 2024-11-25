#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<string> words; // 문자열 벡터 생성
    string input;

    // 문자열 입력 받기
    for (int i = 0; i < 5; ++i) {
        cout << "문자열을 입력하세요: ";
        cin >> input;
        words.push_back(input); // 입력받은 문자열을 벡터에 삽입
    }

    // 사전순으로 정렬
    sort(words.begin(), words.end());

    // 정렬된 결과 출력
    cout << "사전에서 나오는 순서" << endl;
    for (const auto& word : words) {
        cout << word << endl;
    }

    return 0;
}

