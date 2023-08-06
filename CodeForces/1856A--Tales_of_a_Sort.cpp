#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 1

void solution () {
    int n, x=-1, y; cin >> n;
    int ans = 0;
    for (int i=0; i<n; ++i) {
        cin >> y;

        if (x > y) ans = max(ans, x);
        x = y;
    }
    cout << ans << nl;
}

int main (void) {
    //FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
