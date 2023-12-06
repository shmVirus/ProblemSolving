#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 1

void solution () {
    string s; cin >> s;
    for (char c='a'; c<='h'; ++c) {
        if (c != s[0]) cout << c << s[1] << nl;
    }
    for (char c = '1'; c <= '8'; ++c) {
        if (c != s[1]) cout << s[0] << c << nl;
    }
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
