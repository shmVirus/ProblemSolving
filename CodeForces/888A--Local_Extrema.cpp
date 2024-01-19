#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 0

void solution () {
    int n; cin >> n;
    int f, c; cin >> f >> c;
    int ans = 0;
    for (int i=2, l; i<n; ++i) {
        cin >> l;
        if ( (c > f && c > l) || (c < f && c < l) ) {
            ++ans;
        }
        f = c; c = l;
    }
    cout << ans << nl;
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
