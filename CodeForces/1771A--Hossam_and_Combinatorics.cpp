#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 1

void solution () {
    int n; cin >> n;
    int mn = INT_MAX, mx = INT_MIN;
    long long cn = 0, cx = 0; long long ans = 0;
    for (int i=0, x; i<n; ++i) {
        cin >> x;
        if (x < mn) { mn = x; cn = 0; }
        if (x > mx) { mx = x; cx = 0; }
        if (x == mn) ++cn;
        if (x == mx) ++cx;
    }
    if (mn != mx) {
        for (int i=1; i<=cn; ++i) {
            ans += cx;
        }
        ans *= 2;
    } else {
        ans = cx * (cn - 1);
    }
    cout << ans << nl;
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
