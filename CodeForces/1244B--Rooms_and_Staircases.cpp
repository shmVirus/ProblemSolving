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
    int t,n, mx; cin >> t;
    string s;
    while (t--){
        cin >> n >> s;
        mx = n;
        for(int i=0; s[i]!='\0';i++) {
            if (s[i]=='1') mx = max(mx, 2*max(i+1, n-i));
        }
        cout << mx << '\n';
    }
}
