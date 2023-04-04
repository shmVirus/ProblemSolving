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
    int n; cin >> n;
    while (n--) {
        long long k, x;
        cin >> k >> x;
        cout << (k-1)*9+x << '\n';
    }
}
