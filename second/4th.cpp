unsigned sum_of_numbers(unsigned n) {
    auto sum = 0u;

    for (;n;n /= 10) {
        sum += n % 10;
    }

    return sum;
}
