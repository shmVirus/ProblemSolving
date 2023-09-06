#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 1

void solution () {
    int n, a, b, c, d;
    cin >> n >> a >> b >> c >> d;
    int L = n * (a - b), R = n * (a + b);
    if (R < c - d || c + d < L) cout << "No\n";
    else cout << "Yes\n";
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
