// author: @shmVirus; Sabbir < sabbir@disroot.org >

#include <iostream>
int main (void) {
    int t, n; std::cin>> t;
    while (t--) {
        std::cin >> n;
        int x=0, y=0;
        while (n%2==0) {
            n /= 2;
            x++;
        }
        while (n%3==0) {
            n /= 3;
            y++;
        }
        std::cout << (n==1 && x<=y? 2*y-x : -1) << '\n';
    }
    return 0;
}
