#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

// Student 클래스 정의
class Student {
private:
    string name;
    int score;

public:
    // 생성자
    Student(string n, int s) : name(n), score(s) {}

    // 이름 반환
    string getName() const {
        return name;
    }

    // 점수 반환
    int getScore() const {
        return score;
    }

    // < 연산자 오버로딩 (점수 비교를 위해)
    bool operator<(const Student& other) const {
        return score < other.score;
    }
};

int main() {
    vector<Student> students; // Student 객체를 저장하는 벡터
    string name;
    int score;

    // 학생 정보 입력
    for (int i = 0; i < 3; ++i) {
        cout << "이름과 성적을 입력: ";
        cin >> name >> score;
        students.emplace_back(name, score); // Student 객체 생성 및 추가
    }

    // 최고 점수를 가진 학생 찾기
    auto bestStudent = max_element(students.begin(), students.end());

    // 결과 출력
    cout << "최우수학생은" << endl;
    cout << "이름:" << bestStudent->getName() << endl;
    cout << "성적:" << bestStudent->getScore() << "점" << endl;

    return 0;
}

