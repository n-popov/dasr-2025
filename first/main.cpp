#include <iostream>

namespace A {
    int x = 5;
};

namespace B {
    namespace C {
        int x = 10;
    };
};

int main() {
    int x = 15;
    std::cout << A::x << ' ' << B::C::x << ' '<< x << std::endl;

    int year;

    std::cin >> year;

    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
        std::cout << "Leap year\n";
    } else {
        std::cout << "Not a leap year\n";
    }
}

