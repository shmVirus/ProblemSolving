#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 0

void solution () {
    int n, ans=0;
    string a,b;
    cin >> n >> a >> b;
    for(int i=0, k; i<n; ++i) {
        k = abs(b[i]-a[i]);
        ans += k>10-k ? 10-k : k;
    }
    cout << ans << nl;
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
