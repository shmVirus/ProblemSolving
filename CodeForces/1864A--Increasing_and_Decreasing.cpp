#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 1

void solution () {
    int x, y, n; cin >> x >> y >> n;
    if (y - x < n * (n - 1) / 2) {
        cout << -1 << nl;
        return;
    }
    vector<int> a(n);
    a[0] = x;
    a[n - 1] = y;
    int t = 1;
    for (int i = n - 2; i > 0; --i) {
        y -= t;
        ++t;
        a[i] = y;
    }
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " \n"[i == n - 1];
    }
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
