#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 0

void solution () {
    int l, r, a;
    cin >> l >> r >> a;
    if ( abs(l-r) > a ) {
        cout << 2 * (min(l, r) + a) << nl;
    } else {
        int d = abs(l-r);
        cout << 2 * (min(l, r)+d+((a-d)/2)) << nl;
    }
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
