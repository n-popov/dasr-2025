#include <iostream>

int main() {
    int x0, y0, n;
    std::cin >> x0 >> y0 >> n;

    auto abs = [](int a){return a > 0 ? a : -a;};

    int dx, dy;
    auto max = abs(x0 - y0);
    for (auto i = 0; i < n; i++) {
        std::cin >> dx >> dy;
        x0 += dx;
        y0 += dy;

        max = std::max(max, abs(x0 - y0));
    }

    std::cout << max << std::endl;

}
