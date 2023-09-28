#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 1

void solution () {
    int n; cin >> n;
    int h, m; cin >> h >> m;
    int time = 60 * h + m;
    int ans = 24 * 60;
    for(int i = 0; i < n; ++i){
        cin >> h >> m;
        int t = 60 * h + m - time;
        if(t < 0) t += 24 * 60;
        ans = min(ans, t);
    }
    cout << ans / 60 << " " << ans % 60 << nl;
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
