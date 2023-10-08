#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 0

void solution () {
    int n; cin >> n;
    int ans = 0, pre = -1, mn1 = 0, mn2 = 0;
    for (int i=0; i<n; i+=1) {
        int x; cin >> x;
        if (x == pre) {
            mn1 += 1;
        } else {
            pre = x;
            mn2 = mn1;
            mn1 = 1;
        }
        ans = max(ans, min(mn1, mn2));
    }
    cout << ans * 2 << nl;
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
