#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 1

void solution () {
    long long x; cin >> x;
    bool ans = false;
    for (long long i=1; i<=cbrt(x) && !ans; ++i) {
        long long a = i*i*i;
        long long b = x - a;
        if (b <= 0) break;
        long long t = cbrt(b);
        if (t*t*t == b) ans = true;
    }
    cout << (ans ? "YES" : "NO") << nl;
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
