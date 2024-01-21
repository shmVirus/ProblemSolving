#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 0

void solution () {
    int n, t; cin >> n >> t;
    for (int i=1, x, ans=0; i<=n; ++i) {
        cin >> x;
        ans += 86400-x;
        if (ans >= t) {
            cout << i << nl;
            break;
        }
    }
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
