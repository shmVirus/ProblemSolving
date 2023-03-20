// author: @shmVirus; Sabbir < sabbir@disroot.org >

#include <bits/stdc++.h>
using namespace std;
int main (void) {
    int n, a, b, c; cin >> n;
    while (n--) {
        cin >> a >> b >> c;
        if (a+b==c) cout << "+\n";
        else if (a-b==c) cout << "-\n";
    }
    return 0;
}
