// author: @shmVirus; Sabbir < sabbir@disroot.org >

#include <iostream>
int main (void) {
    int n; std::cin >> n;
    std::string s; std::cin >> s;
    int l=0,r=0,u=0,d=0;
    for (int i=0; s[i]!='\0'; i++) {
        if (s[i]=='L') l++;
        else if (s[i]=='R') r++;
        else if (s[i]=='U') u++;
        else if (s[i]=='D') d++;
    }
    std::cout << ((2*std::min(l,r))+(2*std::min(u,d))) << '\n';
    return 0;
}
