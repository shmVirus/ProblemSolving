#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 1

void solution () {
    int n; cin >> n;
    string s, t; cin >> s >> t;

    int a = 0, b = 0;
    for (int i = 0; i < n; ++i) {
        if (s[i] != t[i]) {
            if (s[i] == '0') ++a;
            else ++b;
        }
    }
    cout << max(a, b) << nl;
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
