#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 1

void solution () {
    long long n, x, k;
    cin >> n >> x >> k;
    if(2*k>=x*(x+1) && 2*k<=n*(n+1)-(n-x)*(n-x+1)) cout << "YES" << nl;
    else cout << "NO" << nl;
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
