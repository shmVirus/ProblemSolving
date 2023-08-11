#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 0

void solution () {
    int n, d, ans; cin >> n;
    if (n == 0) ans = 1;
    else {
        int d = n % 4;
        if (d == 0) ans = 6;
        else if (d == 1) ans = 8;
        else if (d == 2) ans = 4;
        else if (d == 3) ans = 2;
    }
    cout << ans << nl;
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
