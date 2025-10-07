#include <iostream>
#include <cstring>

int main() {
    char x[128], y[128], result[128];
    std::cin >> x >> y;
    auto len_x = strlen(x), len_y = strlen(y);
    auto len_result = 0;

    int Solution[129][129];
    for (auto i = 0lu; i <= std::max(len_x, len_y); i++) {
        Solution[i][0] = 0;
        Solution[0][i] = 0;
    }

    for (auto i = 1lu; i <= len_x; i++) {
        for (auto j = 1lu; j <= len_y; j++) {
            if (x[i - 1] == y[j - 1]) {
                Solution[i][j] = 1 + Solution[i - 1][j - 1];
                if (Solution[i][j] > len_result) {
                    result[len_result++] = x[i - 1];
                }
            } else {
                Solution[i][j] = std::max(
                    Solution[i - 1][j], Solution[i][j - 1]);
            }

        }
    }
    for (auto i = 0; i < len_result; i++) {
        std::cout << result[i];
    }
    std::cout << std::endl;
}
