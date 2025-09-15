char leveling(char c) {
    if ('A' <= c && c <= 'Z') {
        return c + 'a' - 'A';
    }

    return c;
}
