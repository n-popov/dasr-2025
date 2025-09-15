unsigned long long int fibonacci(unsigned int n) {
    if (n == 1) {
        return 0;
    }

    if (n == 2) {
        return 1;
    }

    auto prev = 1llu, prev_prev = 0llu;

    unsigned long long current;
    for (auto i = 3u; i <= n; i++) {
        current = prev + prev_prev;

        // for next iteration
        prev_prev = prev;
        prev = current;
    }

    return current;
}