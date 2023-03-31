// author: @shmVirus; Sabbir < sabbir@disroot.org >

#include <bits/stdc++.h>
using namespace std;
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
void solution();

int main (void) {
    FastIO;
    solution();
    return 0;
}
void solution () {
    int t, n, k, x; cin >> t;
    while (t--) {
        cin >> n >> k;
        x = n%k; n -= x;
        cout << n+min(x,k/2) << '\n';
    }
}
