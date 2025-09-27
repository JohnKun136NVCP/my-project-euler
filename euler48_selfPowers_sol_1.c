#include <stdio.h>

#define MOD 10000000000ULL  // 10^10

// Safe modular multiplication using 128-bit intermediate
unsigned long long mod_mult(unsigned long long a, unsigned long long b) {
    return (unsigned long long)(((__int128)a * b) % MOD);
}

// Modular exponentiation: (base^exponent) % MOD
unsigned long long selfPower(unsigned long long base, unsigned long long exponent) {
    unsigned long long result = 1;
    base %= MOD;

    while (exponent > 0) {
        if (exponent & 1) {
            result = mod_mult(result, base);
        }
        base = mod_mult(base, base);
        exponent >>= 1;
    }

    return result;
}

int main() {
    unsigned long long value_data = 0;

    for (unsigned long long i = 1; i <= 1000; ++i) {
        unsigned long long power = selfPower(i, i);
        value_data = (value_data + power) % MOD;
    }

    // Print last 10 digits, zero-padded
    printf("Last 10 digits: %010llu\n", value_data);

    return 0;
}
