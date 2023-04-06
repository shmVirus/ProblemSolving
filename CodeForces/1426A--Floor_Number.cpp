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
    int t, n,x; cin >> t;
    while (t--) {
        cin >> n >> x;
        cout << (n<=2? 1 : (n-3)/x+2) << '\n';
    }
}
