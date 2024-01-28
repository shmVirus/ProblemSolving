#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 0

void solution () {
    int n, k; cin >> n >> k;
    int a[n]; for (int i=0; i<n; ++i) cin >> a[i];
    int l = 0, r = n-1, ans = 0;
    while (l <= r) {
        if ( a[l] <= k ) {
            ++ans; ++l;
        }
        if ( a[r] <= k && l<r) {
            ++ans; --r;
        }
        if ( a[l] > k && a[r] > k ) break;
    }
    cout << ans << nl;
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
