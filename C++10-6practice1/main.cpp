#include <iostream>
#include <vector>

using namespace std;

int main() {
    // 두 개의 2x2 행렬 선언
    vector<vector<int>> matrix1 = {{2, 4}, {5, -5}};
    vector<vector<int>> matrix2 = {{-2, 3}, {0, -5}};
    vector<vector<int>> result(2, vector<int>(2));

    // 행렬 덧셈 수행
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // 결과 출력
    cout << "연산결과:" << endl;
    for (const auto& row : result) {
        for (int value : row) {
            cout << value << " ";
        }
        cout << endl;
    }

    return 0;
}

