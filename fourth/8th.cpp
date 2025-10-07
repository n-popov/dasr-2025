#include <iostream>
#include <limits>

constexpr int N = 100; // known at compile-time

int main () {
    int n, m;
    std::cin >> n >> m;

    int A[N][N];
    for (auto i = 0; i < n; i++) { // lines
        for (auto j = 0; j < m; j++) { // column in line
            std::cin >> A[i][j];
        }
    }

    // auto max_sum = 0; // does not work for negative
    auto max_sum = std::numeric_limits<int>::min();
    auto max_idx = -1;
    for (auto j = 0; j < m; j++) {
        auto sum = 0;
        for (auto i = 0; i < n; i++) {
            sum += A[i][j];
        }

        if (sum > max_sum) {
            max_sum = sum;
            max_idx = j;
        }
    }

    std::cout << max_idx << std::endl;


}
