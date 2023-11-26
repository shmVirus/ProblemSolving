#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 1

void solution () {
    int n, x; cin >> n >> x;
    int prev=0, ans=0;
    for (int i=0, a; i<n; ++i) {
      cin >> a;
      ans = max(ans, a-prev);
      prev = a;
    }
    ans = max(ans, 2*(x-prev));
    cout << ans << nl;
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
