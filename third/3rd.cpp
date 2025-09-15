#include <iostream>

int main() {
    auto mask = 1u;

    unsigned n;
    std::cin >> n;

    for (auto i = 1u; i <= 32u; i++) {
        std::cout << ((n & mask) != 0);
        mask = mask << 1;
        if (i % 4 == 0) std::cout << ' ';
        if (i % 8 == 0) std::cout << ' ';
    }

    std::cout << std::endl;
}




