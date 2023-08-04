#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 1

void solution () {
    int n,k,x; cin >> n >> k >> x;
    if (x != 1) {
        cout << "YES" << nl << n << nl;
        for (int i=0; i<n; ++i) {cout << 1 << " \n" [i+1==n];}
    } else if (k == 1 || (k == 2 && n%2 == 1)) {
        cout << "NO" << nl;
    } else {
        int t = n/2;
        cout << "YES" << nl << t << nl;
        cout << "23" [n%2] << " ";
        for (int i=0; i<t-1; ++i) {cout << 2 << " \n" [i==t-2];}

    }
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
