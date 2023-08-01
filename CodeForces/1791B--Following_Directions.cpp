#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 1

void solution () {
    int n; cin >> n;
    string s; cin >> s;
    bool ans = false;
    int x = 0, y = 0;

    for (int i = 0; i < n && !ans; ++i) {
        if (s[i] == 'U') ++y;
        else if (s[i] == 'D') --y;
        else if (s[i] == 'L') --x;
        else if (s[i] == 'R') ++x;

        if (x == 1 && y == 1) ans = true;
    }
    cout << (ans ? "YES" : "NO") << nl;
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
