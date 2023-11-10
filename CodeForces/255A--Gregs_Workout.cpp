#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 0

void solution () {
    int n, a=0, b=0, c=0; cin >> n;
    for (int i=1, x; i<=n; ++i) {
        cin >> x;
        int t = i % 3;
        if ( t == 1 ) a += x;
        else if ( t == 2 ) b += x;
        else c += x;
    }
    cout << ( a > b ? ( a > c ? "chest" : "back") : ( b > c ? "biceps" : "back") ) << nl;
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
