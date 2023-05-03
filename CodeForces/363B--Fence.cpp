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
    int n,k; cin >> n >> k; int a[n+1], s[n+1]={0};
    for (int i=1; i<=n; ++i) {
        cin >> a[i]; s[i] = s[i-1] + a[i];
    }
    int x = numeric_limits<int>::max(), p = -1;
    for (int i=1; i<=n-k+1; ++i) {
        int t = s[i+k-1] - s[i-1];
        if (t < x) {
            x = t; p = i;
        }
    }
    cout << p << nl;
}
