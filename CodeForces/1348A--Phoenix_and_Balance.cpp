#include <iostream>
#include <cmath>
int main (void) {
    int t, n; std::cin >> t;
    while (t--) {
        std::cin >> n;
        std::cout << pow(2, n/2+1)-2 << std::endl;
    }
    return 0;
}
