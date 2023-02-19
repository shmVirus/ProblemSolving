#include <iostream>
int main (void) {
    int t, n; std::cin >> t;
    while (t--) {
        std::cin >> n;
        std::cout << (n%4? "NO\n" : "YES\n");
    }
    return 0;
}
