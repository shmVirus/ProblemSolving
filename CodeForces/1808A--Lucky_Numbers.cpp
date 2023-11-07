#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 1

int get_diff(int x) {
  int mn = 9, mx = 0;
  while (x > 0) {
    int d = x % 10;
    x /= 10;
    mn = min(mn, d);
    mx = max(mx, d);
  }
  return mx-mn;
}

void solution () {
    int l, r; cin >> l >> r;
    int d = 0, ans = l, j = min(r, l+100);
    for (int i=l; i<=j; ++i) {
      int c = get_diff(i);
      if (c > d) {
        d = c;
        ans = i;
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
