#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 0

void solution () {
    int n; cin >> n;
    int mn = INT_MAX;
    for (int i=0, x; i<n; ++i) {
        cin >> x;
        if (abs(x) < mn) mn = abs(x);
    }
    cout << mn << nl;
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
