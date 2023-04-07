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
    int t,n; string s; cin >> t;
    while (t--) {
        cin >> n >> s;
        string ans(n,s[n-1]);
		cout << ans << '\n';
    }
}
