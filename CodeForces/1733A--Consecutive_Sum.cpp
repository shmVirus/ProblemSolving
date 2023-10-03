#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 1

void solution () {
    int n, k; cin >> n >> k;
    long long a[n+1] = {0};
    for(int i=1; i<=n; ++i) {
        long long x; cin >> x;
        a[i % k] = max(a[i % k], x);
    }
    long long s = 0;
    for(int i=0; i<k; ++i) s += a[i];
    cout << s << nl;
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
