#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 1

void solution () {
    int n, m, k; cin >> n >> m >> k;
    int x, y; cin >> x >> y;
    bool ans = true;

    for (int i=0; i<k; ++i) {
        int xx, yy; cin >> xx >> yy;
	if ((x + y) % 2 == (xx + yy) % 2) ans = false;
    }
    cout << (ans ? "YES" : "NO") << nl;
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
