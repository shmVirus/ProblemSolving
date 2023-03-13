// author: @shmVirus; Sabbir < sabbir@disroot.org >

#include <iostream>
int main (void) {
    int n, s, g[4]={0}; std::cin >> n;
    while (n--) {
        std::cin >> s;
        g[s-1]++;
    }
    std::cout << (g[3] + g[2] + (g[1]+1)/2 + (g[0]>g[2]? (g[1]%2==1? g[0]-=2 : 0),(g[0]-g[2]+3)/4: 0)) << std::endl;
    return 0;
}
