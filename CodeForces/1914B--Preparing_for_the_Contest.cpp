#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 1

void solution () {
    int n, k, i=1; cin >> n >> k;
    for (i; i<=k; ++i) {
        cout << i << " \n" [i == n];
    }
    for (int x=n; x>=i; --x) {
        cout << x << " \n" [x == i];
    }
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
