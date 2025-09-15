void binary(unsigned int n) {
    auto mod = n % 2;

    if (n / 2 != 0) {
        binary(n / 2);
    }

    std::cout << mod;
}