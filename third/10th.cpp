#include <iostream>

int main() {
   int n;
   std::cin >> n;

   int prev = -1; // assume that current >= 0
   int count = 0, max_count = 0;

   for (auto i = 0; i < n; i++) {
        int current;
        std::cin >> current;
        if (current == prev) {
            count++;
        } else {
            max_count = std::max(max_count, count);
            count = 1;
        }

        prev = current;
   }

   std::cout << std::max(max_count, count) << std::endl;
}
