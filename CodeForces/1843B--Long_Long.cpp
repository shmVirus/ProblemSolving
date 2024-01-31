#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 1

void solution () {
    int n; cin >> n;
    long long sm = 0; int op = 0;
    for (int i=0, x, c=0; i<n; ++i) {
        cin >> x;
        sm += 0LL + abs(x);
        if (x < 0 && c == 0) {
            c = 1;
            op += 1;
        }
        if (x > 0) {
            c = 0;
        }
    }
    cout << sm << " " << op << nl;
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
