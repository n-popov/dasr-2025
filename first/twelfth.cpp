#include <iostream>

int main() {
    int n;

    std::cin >> n;

    int digits = 1;
    for(int n_copy = n; n_copy > 1; n_copy = n_copy >> 1) {
        digits++;
    }

    int mask = 1 << (digits - 1);

    for(;mask != 0; mask = mask >> 1) {
        std::cout << ((mask & n) != 0);
    }
}

