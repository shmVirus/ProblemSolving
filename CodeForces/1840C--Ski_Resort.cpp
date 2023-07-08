#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 1

void solution () {
    int n, k, q, a; cin >> n >> k >> q;
    long long ways= 0; int days = 0;
    for (int i=0; i<n; ++i) {
        cin >> a;
        if (a <= q) {
            ++days;
        } else {
            if (a > q && days >= k) {
                ways += 1LL * (days-k+1) * (days-k+2) / 2;
            }
            days = 0;
        }
    }

    if (days >= k) ways += 1LL * (days-k+1) * (days-k+2) / 2;
    cout << ways << nl;
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
