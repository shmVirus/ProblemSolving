#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 0

void solution () {
    int n, m; cin >> n >> m;
    char a[n][m]; int ans = 0;
    for (int i=0; i<n; ++i) {
        for (int j=0; j<m; ++j) {
            cin >> a[i][j];
        }
    }
    for (int i=0; i<n; ++i) {
        bool p = false;
        for (int j=0; j<m; ++j) {
            bool t = true;
            for (int k=0; k<n; ++k) {
                if (a[k][j] > a[i][j]) t = false;
            }
            if (t) p = true;
        }
        if (p) ++ans;
    }
    cout << ans << nl;
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
