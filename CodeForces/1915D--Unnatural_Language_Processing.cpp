#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 1

void solution () {
    int n; cin >> n;
    string s; cin >> s;
    reverse(s.begin(), s.end());

    string ans = "";
    for (int i=0; i<n; ++i) {
      ans += s[i];
      char c = s[i];
      if ( c == 'a' || c == 'e' ) {
        ans += s[i+1];
        ans += ".";
        i += 1;
      }
    }
    ans.pop_back();
    reverse(ans.begin(), ans.end());
    cout << ans << nl;
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
