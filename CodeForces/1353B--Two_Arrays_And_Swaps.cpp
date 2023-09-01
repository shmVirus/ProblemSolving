#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 1

void solution () {
    int n, k; cin >> n >> k;
    vector<int> a(n);
    for (auto &it : a) cin >> it;
    vector<int> b(n);
    for (auto &it : b) cin >> it;
    sort(a.begin(), a.end());
    sort(b.rbegin(), b.rend());
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        if (i < k) ans += max(a[i], b[i]);
        else ans += a[i];
    }
    cout << ans << nl;
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
