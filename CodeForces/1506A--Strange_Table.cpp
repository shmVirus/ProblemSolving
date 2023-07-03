#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 1

void solution () {
    long long n, m, x; cin >> n >> m >> x;
    cout << (--x % n) * m + (x / n) + 1 << nl;
}

int main (void) {

    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();

    return 0;
}
