#include <iostream>
#include <vector>

long int prime(int n) {
    std::vector<bool> data(n+1, true);
    long int sum = 0;
    for (int x = 2; x <= n; ++x) {
        if (data[x] && x % 2 == 1) {
            sum += x;
            for (int y = x; y <= n; y += x) {
                data[y] = false;
            }
        }
    }
    return sum;
}

int main() {
    std::cout << prime(1999999) << std::endl;
    return 0;
}
