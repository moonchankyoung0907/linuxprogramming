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

    // 사전순으로 제일 뒤에 있는 단어 찾기
    auto max_word_it = max_element(words.begin(), words.end());

    cout << "사전에서 제일 뒤에 나오는 단어는 " << *max_word_it << endl;

    return 0;
}

