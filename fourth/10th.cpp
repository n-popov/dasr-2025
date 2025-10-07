#include <iostream>

int main() {
    int n, m;
    std::cin >> n >> m;

    int A[10][10];

    for (auto i = 0; i < n; i++) {
        for (auto j = 0; j < m; j++) {
            std::cin >> A[j][i]; // Reading transposed!!
        }
    }


    for (auto i = 0; i < m; i++) {
        for (auto j = 0; j < n; j++) {
            std::cout << A[i][j] << ' ';
        }
        std::cout << std::endl;
    }


}
