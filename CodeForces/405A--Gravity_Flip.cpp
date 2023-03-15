// author: @shmVirus; Sabbir < sabbir@disroot.org >

#include <iostream>
#include <algorithm>
int main (void) {
    int n; std::cin >> n; int a[n];
    for (int i=0; i<n; i++) {
        std::cin >> a[i];
    }
    std::sort(&a[0], &a[n]);
    for (int i=0; i<n; i++) {
        std::cout << a[i] << (i+1==n? "\n" : " ");
    }
    return 0;
}
