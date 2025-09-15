
#include <cctype>
#include <functional>
/*
bool is_xdigit(char c) {
    return std::isdigit(c) || ('A' <= c && c <= 'Z');
}
*/

int to_decimal(char c) {
    if (std::isdigit(c)) {
        return c - '0'; // 51 - 48
    }

    return (c - 'A') + 10;
}

unsigned long long int get_a_hexadecimal() {
    char c;
    auto result = 0llu;
    for (;;) {
        std::cin.get(c);

        if (c == ' ' || c == '\n') {
            return result;
        }

        std::function<bool(char)> is_xdigit = [](char c) {
            return std::isdigit(c) || ('A' <= c && c <= 'Z');
        }; // also may write auto

        if (!is_xdigit(c)) {
            return 0;
        }

        result = result * 16 + to_decimal(c);
    }
}