#include <iostream>

int main() {
    auto mask = 1u << 31;

    unsigned n;
    std::cin >> n;

    for (;mask;) {
        std::cout << ((n & mask) != 0);
        mask = mask >> 1;
    }

    std::cout << std::endl;
}
