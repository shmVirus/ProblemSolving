#include <iostream>
int main (void) {
    long long int n, k; std::cin >> n >> k;
    (n/k)%2? std::cout << "YES\n" : std::cout << "NO\n";
    return 0;
}
