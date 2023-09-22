#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 1

void solution () {
    int n; cin >> n;
    int a[n]; int mn = INT_MAX; int index = -1;
    for (int i=0; i<n; ++i) {
        cin >> a[i];
        if (a[i] < mn) {
            mn = a[i];
            index = i;
        }
    }
    ++a[index];
    long long ans = 1;
    for (int i=0; i<n; ++i) {
        ans *= a[i] * 1LL;
    }
    cout << ans << nl;
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
