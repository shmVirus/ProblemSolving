#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 1

int nCr(int n, int r) {
    int result = 1;
    for (int i=0; i<r; ++i) {
        result *= (n - i);
        result /= (i + 1);
    }
    return result;
}

void solution () {
    int n; cin >> n;
    for (int i=1, x; i<=n; ++i) { cin >> x; }
    cout << 6 * nCr(10-n, 2) << nl;
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
