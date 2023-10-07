#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 1

int ans (int c, int x, int y) {
    return max(0, max(x, y) + 1 - c);
}

void solution () {
    int a, b, c; cin >> a >> b >> c;
    cout << ans(a, b, c) << " " << ans(b, a, c) << " " << ans(c, a, b) << nl;
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}

