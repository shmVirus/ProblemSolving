#include <iostream>
#include <cmath>
int main (void) {
    int t, x; std::cin >> t;
    while (t--) {
        std::cin >> x;
        std::cout << (x >= 111*(x%11)? "YES\n" : "NO\n");
    }
    return 0;
}
