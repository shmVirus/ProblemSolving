#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 1

void solution () {
    int n, m; cin >> n >> m;
    string x, s; cin >> x >> s;
    int ans = -1;
    for (int i=0; i<=5 && ans==-1; ++i) {
        if (x.find(s) != string::npos) ans = i;
        x += x;
    }
    cout << ans << nl;
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
