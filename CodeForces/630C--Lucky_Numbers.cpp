#include <iostream>
#include <cmath>
int main (void) {
    int n; std::cin >> n;
    std::cout << (long long) pow(2LL, n+1) - 2 << std::endl;
    return 0;
}
