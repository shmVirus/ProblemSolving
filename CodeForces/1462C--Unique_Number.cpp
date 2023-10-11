#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 1

void solution () {
    int x; cin >> x;
    if (x > 45) {
        x = -1;
    } else if (x > 9) {
        int t = 0, d = 9, n = 1;
        while (x > 0) {
            d = (x - d < 0 ? x : d);
            t += d * n; x -= d;
            --d; n *= 10;
        }
        x = t;
    }
    cout << x << nl;
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
