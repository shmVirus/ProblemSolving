#include <iostream>
int main (void) {
    int t, n; std::cin >> t;
    while (t--) {
        std::cin >> n;
        if (n%4 != 0) {
            std::cout << "NO\n";
            continue;
        } else {
            std::cout << "YES\n";
            for (int i=0, x=2; i<n/2; i++, x+=2) {
                std::cout << x << " ";
            }
            for (int i=0, x=1; i<=n/2; i++, x+=2) {
                if (x==n/4*2+1) continue;
                std::cout << x;
                std::cout << (i==n/2? "\n" : " ");
            }
        }
    }
    return 0;
}
