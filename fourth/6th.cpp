#include <iostream>
#include <functional>

void insertion_sort(int* nums, int n, std::function<bool(int, int)> cmp) {
    for (auto i = 1; i < n; i++) {
        for (auto j = i;
            (j > 0) && cmp(nums[j], nums[j - 1]); j--) {

            std::swap(nums[j], nums[j - 1]);
        }
    }
}

int main() {
    int nums[1000];

    int n;

    std::cin >> n;

    for (auto i = 0; i < n; i++) {
        std::cin >> nums[i];
    }

    auto cmp = [](int a, int b) {
        if (a >= 0 && b >= 0) {
            return a < b;
        } else if (a < 0 && b >= 0) {
            return false;
        } else if (a >= 0 && b < 0) {
            return true;
        } else {
            return std::abs(a) < std::abs(b);
        }
    };

    insertion_sort(nums, n, cmp);

    for (auto i = 0; i < n; i++) {
        std::cout << nums[i] << ' ';
    }

    std::cout << std::endl;

}
