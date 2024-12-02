#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // 행렬을 2차원 벡터로 정의
    vector<vector<int>> matrix = {
        {-5, 2, 35},
        {-20, 5, 100},
        {-75, 5, -25}
    };

    int max_value = matrix[0][0]; // 최대값 초기화
    int max_row = 0, max_col = 0; // 최대값의 위치 초기화

    // 행렬에서 최대값과 그 위치를 찾음
    for (size_t i = 0; i < matrix.size(); i++) {
        for (size_t j = 0; j < matrix[i].size(); j++) {
            if (matrix[i][j] > max_value) {
                max_value = matrix[i][j];
                max_row = i;
                max_col = j;
            }
        }
    }

    // 출력 결과
    cout << "최대값은 " << max_value << endl;
    cout << "위치는 " << max_row + 1 << "행 " << max_col + 1 << "열" << endl;

    return 0;
}

