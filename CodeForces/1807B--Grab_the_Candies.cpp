// author: @shmVirus; Sabbir < sabbir@disroot.org >

#include <bits/stdc++.h>
using namespace std;
int main (void) {
    int t, n, a, m,b; cin >> t;
    while (t--) {
        cin >> n;
        m=b=0;
        while (n--) {
            cin >> a;
            a%2? b+=a : m+=a;
        }
        cout << (m>b? "YES\n" : "NO\n");
    }
    return 0;
}
