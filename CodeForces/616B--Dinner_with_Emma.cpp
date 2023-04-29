// author: @shmVirus; Sabbir < sabbir@disroot.org >

#include <bits/stdc++.h>
using namespace std;

#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define nl "\n";
#define test int tc; cin>>tc; for(int cs=1;cs<=tc;cs++)

void solution();

int main (void) {
    FastIO;
    solution();
    return 0;
}
void solution () {
    int n,m,x, rc, cc=-1; cin >> n >> m;
    for (int i=0; i<n; i++) {
        rc = 2147483647;
        for (int j=0; j<m; j++) {
            cin >> x; rc = min (x, rc);
        }
        cc = max (rc, cc);
    }
    cout << cc << nl;
}
