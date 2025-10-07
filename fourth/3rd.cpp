#include <iostream>

void insertion_sort(int* nums, int n) {
    for (auto i = 1; i < n; i++) {
        for (auto j = i;
            (j > 0) && (nums[j] > nums[j - 1]); j--) {

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

    int m;
    std::cin >> m;

    insertion_sort(nums, n);

    for (auto i = 0; i < m; i++) {
        std::cout << nums[m - i - 1] << ' ';
    }
    std::cout << std::endl;

}
