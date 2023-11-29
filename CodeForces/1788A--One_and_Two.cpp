#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 1

void solution () {
    int n; cin >> n;
    int k[n+1], cnt = 0, ans = -1;
    for (int i=1, a; i<=n; ++i) {
        cin >> a;
        if (a%2 == 0) {
            k[++cnt] = i;
        }
    }
    if (cnt%2 == 0) {
        if (cnt == 0) ans = 1;
        else ans = k[cnt/2];
    }
    cout << ans << nl;
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}

