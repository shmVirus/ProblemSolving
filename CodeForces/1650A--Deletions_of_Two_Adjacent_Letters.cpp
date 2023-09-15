#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 1

void solution () {
    string s, t; cin >> s >> t;
    bool yes = false;
    for(int i=0; i<s.length(); ++i) {
        if (s[i] == t[0] && i % 2 == 0) {
            yes = true;
        }
    }
    cout << (yes ? "YES" : "NO") << nl;
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
