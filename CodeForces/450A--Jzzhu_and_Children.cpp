#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 0

void solution () {
    int n, m, x; cin >> n >> m;
    int last; int t = -1;
    for (int i=1; i<=n; ++i) {
        cin >> x;
        x = (x+m-1) / m;
        if (x >= t) {
            t = x;
            last = i;
        }
    }
    cout << last << nl;
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
