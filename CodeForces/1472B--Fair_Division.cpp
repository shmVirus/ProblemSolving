// author: @shmVirus; Sabbir < sabbir@disroot.org >

#include <iostream>
int main (void) {
    int t, n, a, x, y; std::cin >> t;
    while (t--) {
        std::cin >> n;
        x=y=0;
        while (n--) {
            std::cin >> a;
            a==1? x++ : y++;
        }
        n = x + 2*y;
        std:: cout << (n%2? "NO\n" : (n/=2, (n%2==0 || n%2==1 && x!=0)? "YES\n" : "NO\n"));
    }
    return 0;
}
