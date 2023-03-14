// author: @shmVirus; Sabbir < sabbir@disroot.org >

#include <iostream>
int main (void) {
    int t, n, x, y; std::cin >> t;
    while (t--) {
        std::cin >> n;
        x = n%2020;
        y = (n - x*2021)/2020;
        std:: cout << ( y>=0 && 2020*y+2021*x==n? "YES\n" : "NO\n");
    }
    return 0;
}
