#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 0

void solution () {
    int n; cin >> n;
    int x[n]; for (int i=0; i<n; ++i) cin >> x[i];

    for (int i=0; i<n; ++i) {
        int mn, mx;
        mx = max(x[i] - x[0], x[n-1] - x[i]);
        if (i == 0) mn = x[1] - x[0];
        else if (i == n - 1) mn = x[n-1] - x[n-2];
        else mn = min(x[i] - x[i-1], x[i+1] - x[i]);
        cout << mn << " " << mx << nl;
    }
    // RTE
    /*for (int i=0; i<n; ++i) {
        int mn = INT_MAX; int mx = INT_MIN;
        for (int j=0; j<n; ++j) {
            if (i == j) continue;
            int d = abs(x[i] - x[j]);
            mn = min(mn, d);
            mx = max(mx, d);
        }
        cout << mn << " " << mx << nl;
    }*/
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
