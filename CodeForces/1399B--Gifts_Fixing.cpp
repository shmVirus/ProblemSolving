#include <iostream>
int main (void) {
    int t, n, x, y; std::cin >> t;
    while (t--) {
        std::cin >> n;
        int a[n]; std::cin >> a[0]; x=a[0];
        for (int i=1; i<n; i++) {
            std::cin >> a[i];
            a[i]<x? x=a[i]:0;
        }
        int b[n]; std::cin >> b[0]; y=b[0];
        for (int i=1; i<n; i++) {
            std::cin >> b[i];
            b[i]<y? y=b[i]:0;
        }
        long long int m=0;
        for (int i=0; i<n; i++) {
            m += a[i]-x > b[i]-y? a[i]-x : b[i]-y;
        }
        std::cout << m << std::endl;
    }
    return 0;
}
