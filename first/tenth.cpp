#include <iostream>

int main() {
    int n;

    std::cin >> n;

    for (int n_simples = 0, i = 2;;i++) {
        bool is_simple = true;

        for (auto j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                is_simple = false;
            }
        }

        if (is_simple) {
            n_simples++;
        }

        if (n_simples == n) {
            std::cout << i << std::endl;
            break;
        }

    }
}





