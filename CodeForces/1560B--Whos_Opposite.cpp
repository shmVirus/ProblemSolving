#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 1

void solution () {
    int a, b, c, d;
    cin >> a >> b >> c;
    int n = 2 * abs(a-b);
    if ( a > n || b > n || c > n ) {
        d = -1;
    } else {
        d = n / 2 + c;
        if ( d > n ) d -= n;
    }
    cout << d << nl;
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
