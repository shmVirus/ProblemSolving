#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 0

void solution () {
    int n, k; cin >> n >> k;
    int a[n], mn = INT_MAX;
    long long ans = 0;

    for (int i=0; i<n; ++i) {
        cin >> a[i]; mn = min(mn, a[i]);
    }

    for (int i=0; i<n; ++i) {
        int t = a[i]-mn; int x = t / k;
        if ( x * k == t ) ans += x + 0LL;
        else {
            ans = -1;
            break;
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
