#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 1

void solution () {
    int n, m; cin >> n >> m;
    if (n < m) swap(n, m);
    if (m==1 && n>=3) {
        cout << -1 << nl;
    } else {
        cout << 2*n-2-(n+m)%2 << nl;
    }
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
