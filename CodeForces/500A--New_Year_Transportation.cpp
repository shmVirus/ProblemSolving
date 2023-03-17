// author: @shmVirus; Sabbir < sabbir@disroot.org >

#include <iostream>
int main (void) {
    int n, t, a, p=1; std::cin >> n >> t;
    bool c[n+1] ={false};
    for (int i=1; i<n; i++) {
        std::cin >> a;
        if ( i==p ) {
            p += a; c[p] = true;
        }
    }
    std::cout << (c[t]? "YES\n" : "NO\n");
    return 0;
}
