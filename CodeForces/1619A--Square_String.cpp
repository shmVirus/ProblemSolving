#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 1

void solution () {
    string s; cin >> s;
    bool ans = true;
    int l = s.length();
    if (l%2) {
        ans = false;
    } else {
        for (int i=0, j=l/2; j<l && ans; ++i, ++j) {
            if (s[i] != s[j]) {
                ans = false;
            }
        }
    }
    cout << (ans ? "YES" : "NO") << nl;
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
