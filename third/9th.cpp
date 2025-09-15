unsigned long long int primorial(int n) {
    auto result = 2llu;

    auto is_prime = [](int x) {
        for (auto i = 2; i * i <= x; i++) {
            if (x % i == 0) {
                return false;
            }
        }
        return true;
    };

    for (auto i = 3; i <= n; i++) {
        if (is_prime(i)) {
            result *= i;
        }
    }

    return result;
}