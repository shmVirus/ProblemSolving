#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 1

void solution () {
    int n, m, k, H;
    cin >> n >> m >> k >> H;
    int ans = 0;
    
    for (int i=0; i<n; ++i) {
        int h; cin >> h;
	if (h != H && h % k == H % k && abs(h - H) <= k * (m - 1)) ans += 1;
    }
    cout << ans << nl; 
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
