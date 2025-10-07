#include <iostream>

int main() {
    int n;
    std::cin >> n;

    if (n <= 1) {
        std::cout << 0 << std::endl;
        return 0;
    }

    int next, after_next;
    std::cin >> next >> after_next;

    auto sum = 0;
    for(int i = 0; ;) {
        if (next <= after_next) {
            sum += next;
            next = after_next;
            i += 1;
            if (n - i < 2) {
                break;
            }
            std::cin >> after_next;
        } else {
            sum += after_next;
            i += 2;
            if (n - i < 2) {
                break;
            }
            std::cin >> next >> after_next;
        }
    }
    std::cout << sum << std::endl;

}
