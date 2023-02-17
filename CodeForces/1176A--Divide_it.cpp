#include <iostream>
int main (void) {
    int q, m;
    std::cin >> q;
    long long int n;
    while (q-- > 0) {
        std::cin >> n;
        m = 0;
        while (n>1) {
            n = n%5? (n%3? (n%2? 0 : n/2) : 2*n/3) : 4*n/5;
            n==0? m=-1 : m++;
        }
        std::cout << m << std::endl;
    }
    return 0;
}
