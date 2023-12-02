#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 1

void solution () {
    int n, l, r, g=0;
    cin >> n >> l;
    g = gcd(g, l);
    for (int i=1; i<n; ++i) {
        cin >> r;
        g = gcd(g, r);
    }
    cout << r/g << nl;
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
