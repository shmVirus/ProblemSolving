// author: @shmVirus; Sabbir < sabbir@disroot.org >

#include <bits/stdc++.h>
using namespace std;

#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define nl "\n";
#define test int tc; cin>>tc; for(int cs=1;cs<=tc;cs++)

void solution();

int main (void) {
    FastIO;
    solution();
    return 0;
}
void solution () {
    int m,n; cin >> n >> m; int a[n];
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    sort(a, a+n); n=0;
    for (int i=0; i<m; i++) {
        if (a[i]>0) break;
        n += a[i];
    }
    cout << abs(n) << nl;
}
