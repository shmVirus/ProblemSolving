#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 0

void solution () {
    int t, s, x;
    cin >> t >> s >> x;
    bool ans = false;
    if (x == t) ans = true;
    else if (x < t or x == t+1) ans = false;
    else if ((x - t) % s == 0) ans = true;
    else if ((x - t - 1) % s == 0) ans = true;
    cout << ( ans ? "YES" : "NO" ) << nl;
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
