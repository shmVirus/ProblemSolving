#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 0

void solution () {
    int n, q; cin >> n >> q;
    long long p[n], s[n+1];
    for (int i=0; i<n; ++i) cin >> p[i];
    sort(p, p+n);
    for (int i=0; i<n; ++i) s[i+1] = s[i]+p[i];
    for (int i=0, x,y; i<q; ++i) {
        cin >> x >> y;
        cout << s[n - x + y] - s[n - x] << nl;
    }
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
