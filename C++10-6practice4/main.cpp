#include <iostream>
#include <vector>
#include <algorithm> // std::for_each 사용

using namespace std;

// 행렬 데이터 수정 및 출력 함수
void modifyMatrix(vector<vector<int>> &matrix) {
    for (auto &row : matrix) { // 각 행(row)을 순회
        for (auto &element : row) { // 각 원소(element)를 순회
            // 조건에 따라 값을 수정
            if (element < 0) {
                element = 0; // 음수는 0으로
            } else if (element > 0) {
                element = 255; // 양수는 255로
            }
        }
    }
}

// 행렬 출력 함수
void printMatrix(const vector<vector<int>> &matrix) {
    cout << "수정행렬" << endl;
    for (const auto &row : matrix) {
        for (const auto &element : row) {
            cout << element << " ";
        }
        cout << endl;
    }
}

int main() {
    // 초기 행렬 데이터 정의
    vector<vector<int>> matrix = {
        {-5, 2, 35},
        {-20, 5, 100},
        {-75, 5, -25}
    };

    // 행렬 데이터 수정
    modifyMatrix(matrix);

    // 수정된 행렬 출력
    printMatrix(matrix);

    return 0;
}

