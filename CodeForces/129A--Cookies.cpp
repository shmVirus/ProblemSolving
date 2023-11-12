#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 0

void solution () {
    int n, odds=0; cin >> n;
    for (int i=0, x; i<n; ++i) {
        cin >> x;
        odds += x % 2;;
    }
    cout << ( odds % 2 ? odds : (odds == n ? 0 : n-odds) ) << nl;
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
