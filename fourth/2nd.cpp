#include <iostream>

int main() {
    int nums[1000];

    int n;

    std::cin >> n;

    int sum = 0;
    for (auto i = 0; i < n; i++) {
        std::cin >> nums[i];
        sum += nums[i];
    }

    auto mean = 1.0 * sum / n;

    for (auto i = 0; i < n; i++) {
        if (nums[i] > mean) {
            std::cout << nums[i] << ' ';
        }
    }
    std::cout << std::endl;
}
