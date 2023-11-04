#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 1

void solution () {
    int ans, x, y, k;
    cin >> x >> y >> k;
    if (y < x) ans = x;
    else {
        int t = y - x;
        if (t <= k) ans = y;
        else {
            t = x + k;
            ans = t + 2 * (y - t);
        }
    }
    cout << ans << nl;
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
