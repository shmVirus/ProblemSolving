#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 1

void solution () {
    int n; cin >> n;

    int cnt = 0;
    for (int i=0; i<n; ++i) {
        int x; cin >> x;
        cnt += ( x == 1 );
    }
    cout << n - cnt / 2 << nl;
}

int main (void) {
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
