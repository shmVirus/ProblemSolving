#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 1

void solution () {
    long long a, b, n, m, q, r, cost;
    cin >> a >> b >> n >> m;
    q = n / (m+1); r = n - q * (m+1);
    cost = q * min(a*m, b*(m+1))+r*min(a,b);
    cout << cost << nl;
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
