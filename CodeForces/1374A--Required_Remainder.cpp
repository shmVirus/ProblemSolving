#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 1

void solution () {
    int x,y,n; cin >> x >> y >> n;
    int t = n % x; int ans;
    if (t == y) {
        ans = n;
    } else if (t < y) {
        ans = n + y - t - x;
    } else {
        ans = n + y - t;
    }
    cout << ans << nl;
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
