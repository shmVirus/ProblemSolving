#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 1

void solution () {
    int n, p = 1; cin >> n;
    long long int sum = 1LL*n*(n+1)/2;
    while (p <= n) {
        int t = p*2;
        sum -= t; p = t;
    }
    cout << sum << nl;
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
