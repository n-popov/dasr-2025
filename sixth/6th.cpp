#include <iostream>

int main() {
    int n;
    std::cin >> n;

    if (n <= 1) {
        std::cout << 0 << std::endl;
        return 0;
    }

    int before_prev, prev;
    std::cin >> before_prev >> prev;

    for (int i = 0; i + 2 < n; i++) { // n - 2 remaining
        int current_cost;
        std::cin >> current_cost;

        auto current = current_cost +
            std::min(prev, before_prev);

        before_prev = prev;
        prev = current;
    }

    std::cout << std::min(before_prev, prev) << std::endl;

}
