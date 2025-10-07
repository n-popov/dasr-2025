#include <iostream>
#include <cstring>

int main() {
    char x[128], y[128];
    std::cin >> x >> y;
    auto len_x = strlen(x), len_y = strlen(y);

    int Solution[129][129];
    for (auto i = 0lu; i <= std::max(len_x, len_y); i++) {
        Solution[i][0] = 0;
        Solution[0][i] = 0;
    }

    for (auto i = 1lu; i <= len_x; i++) {
        for (auto j = 1lu; j <= len_y; j++) {
            if (x[i - 1] == y[j - 1]) {
                Solution[i][j] = 1 + Solution[i - 1][j - 1];
            } else {
                Solution[i][j] = std::max(
                    Solution[i - 1][j], Solution[i][j - 1]);
            }

        }
    }
    std::cout << Solution[len_x][len_y] << std::endl;
}
