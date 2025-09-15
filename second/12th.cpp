#include <cctype>

/*
bool is_letter(char c) {
    return ('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z');
}
*/

#define ever (;;)

char get_a_letter() {
    char c;

    for ever {
        // std::cin >> c;

        std::cin.get(c);

        if (std::isalpha(c)) {
            return c;
        }
    }
}