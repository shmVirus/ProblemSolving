// author: @shmVirus; Sabbir < sabbir@disroot.org >

#include <iostream>
int main (void) {
    int n; std::cin >> n;
    int a, m=-1, x=0;
    for (int i=1; i<=n; i++) {
        std::cin >> a;
        if (x==a) x++;
        else if (a > x && m==-1) {
            m = i;
            break;
        }
    }
    std::cout << m << '\n';
    return 0;
}
