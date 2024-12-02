#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Student 구조체 정의
struct Student {
    string name;           // 학생 이름
    vector<int> scores;    // 국어, 영어, 수학 성적을 저장하는 벡터
    double average;        // 평균 점수

    // 평균 점수를 계산하는 함수
    void calculateAverage() {
        int sum = 0;
        for (int score : scores) { // 성적 벡터의 각 성적 합산
            sum += score;
        }
        // 합산 결과를 성적 개수로 나누어 평균 계산
        average = static_cast<double>(sum) / scores.size();
    }
};

int main() {
    vector<Student> students(3); // 3명의 학생 정보를 저장할 벡터
    int bestIndex = 0;          // 최우수 학생의 인덱스를 저장 (초기값 0)

    // 3명의 학생 성적 입력 받기
    for (int i = 0; i < 3; i++) {
        // 학생 이름 설정 (1번째 학생, 2번째 학생 등)
        students[i].name = to_string(i + 1) + "번째 학생";

        // 학생의 국어, 영어, 수학 성적 입력 받기
        cout << students[i].name << "의 국어, 영어, 수학 성적을 입력: ";
        int korean, english, math;
        cin >> korean >> english >> math;

        // 성적을 벡터에 저장
        students[i].scores = {korean, english, math};

        // 평균 점수 계산
        students[i].calculateAverage();

        // 최우수 학생의 평균 점수와 비교하여 갱신
        if (students[i].average > students[bestIndex].average) {
            bestIndex = i; // 더 높은 평균 점수를 가진 학생의 인덱스 저장
        }
    }

    // 최우수 학생 정보 출력
    cout << "최우수 학생은 " << students[bestIndex].name
         << "이고 평균점수는 " << static_cast<int>(students[bestIndex].average)
         << "점이다." << endl;

    return 0; // 프로그램 종료
}

