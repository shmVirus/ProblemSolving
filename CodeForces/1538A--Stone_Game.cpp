#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 1

void solution () {
    int n; cin >> n;
    int mx = INT_MIN, mn = INT_MAX, mxin = -1, mnin = -1;
    for (int i=1, x; i<=n; ++i) {
        cin >> x;
        if (x > mx) {
            mx = x;
            mxin = i;
        }
        if (x < mn) {
            mn = x;
            mnin = i;
        }
    }
    cout << min({
            max(mxin, mnin),
            n - min(mxin, mnin) + 1,
            n - mxin + mnin + 1,
            n - mnin + mxin + 1}) << nl;
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
