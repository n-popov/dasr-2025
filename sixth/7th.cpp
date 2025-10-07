#include <iostream>

int main() {
    bool starts[101];
    int N;
    std::cin >> N;
    for(auto i = N; i > 0; i--) {
        if (i * 2 >= N || i + 2 >= N || i + 5 >= N) {
            starts[i] = false;
        } else if (starts[i * 2] == false &&
                   starts[i + 2] == false &&
                   starts[i + 5] == false) {
            starts[i] = true;
        } else {
            starts[i] = false;
        }
    }

    /*
    for (auto i = 1; i < N; i++) {
        std::cout << starts[i] << ' ';
    }
    std::cout << std::endl;
    */

    for (auto i = 1; i < N; i++) {
        if (starts[i]) {
            std::cout << i << std::endl;
            break;
        }
    }
}
