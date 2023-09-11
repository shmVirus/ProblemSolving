#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 1

void solution () {
    int n; cin >> n;
    int a[n];
    for (int i=0; i<n; ++i) cin >> a[i];
    int ans = 0;
    for (int i=n-2; i>=0; --i) {
        while (a[i] >= a[i+1] && a[i] > 0) {
            a[i] /= 2;
            ans++;
        }
        if(a[i] == a[i+1]) {
            ans = -1;
            break;
        }
    }
    cout << ans << nl;
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
