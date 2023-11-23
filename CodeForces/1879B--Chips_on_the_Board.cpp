#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 1

void solution () {
    int n; cin >> n;
    int mnA = INT_MAX;
    int mnB = INT_MAX;
    int a[n]; long long mnAs=0, mnBs=0;
    for (int i=0; i<n; ++i) {
        cin >> a[i]; mnA = min(mnA, a[i]);
    }
    for (int i=0, x; i<n; ++i) {
        cin >> x; mnB = min(mnB, x);
        mnAs += 0LL+mnA+x;
    }
    for (int i=0; i<n; ++i) {
        mnBs += 0LL+mnB+a[i];
    }
    cout << min(mnAs, mnBs) << nl;
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
