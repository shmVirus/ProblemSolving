// author: @shmVirus; Sabbir < sabbir@disroot.org >

#include <bits/stdc++.h>
using namespace std;
int main (void) {
    int t, n, q, l, r, k; cin >> t;
    while (t--) {
        cin >> n >> q;
        int a[n+1], p[n+1]={0};
        for (int i=1; i<=n; i++) {
            cin >> a[i];
            p[i] = p[i-1]+a[i];
        }
        while (q--) {
            cin >> l >> r >> k;
            int s = ((r-l+1)*k)+p[l-1]+(p[n]-p[r]);
            cout << (s%2? "YES\n" : "NO\n");
        }
    }
    return 0;
}
