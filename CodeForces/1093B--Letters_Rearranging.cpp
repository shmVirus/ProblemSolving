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
    int t; cin >> t; string s;
    while (t--) {
        cin >> s;
        sort(s.begin(), s.end());
		cout << ((s[0] == s.back())? "-1" : s) << '\n';
    }
}
