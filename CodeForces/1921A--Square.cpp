#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 1

int diff(int p, int q) {
    return abs(min(p,q)-max(p,q));
}

void solution () {
    int len = -1;
    int x, y; cin >> x >> y;
    for (int i=1, a,b; i<4; ++i) {
        cin >> a >> b;
        len = max(diff(x, a), diff(y, b));
        x = a; y = b;
    }
    cout << len * len << nl;
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
