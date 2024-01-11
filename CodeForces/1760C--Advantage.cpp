#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 1

void solution () {
    int n; cin >> n;
    int mx = INT_MIN, sm = INT_MIN;
    int a[n+1];
    for (int i=1; i<=n; ++i) {
        cin >> a[i];
        if (a[i] >= mx) {
            sm = mx;
            mx = a[i];
        } else if (a[i] > sm) {
            sm = a[i];
        }
    }
    for (int i=1; i<=n; ++i) {
        if (a[i] == mx) cout << mx - sm << " \n" [i == n];
        else cout << a[i] - mx << " \n" [i == n];
    }
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
