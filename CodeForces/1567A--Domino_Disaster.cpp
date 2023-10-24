#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 1

void solution () {
    int n; cin >> n;
    string s, res; cin >> s;
    for (int i=0; i<n; ++i) {
        if (s[i] == 'U') {res += 'D';}
        else if (s[i] == 'D') {res += 'U';}
        else {res += "LR"; ++i;}
    }
    cout << res << nl;
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
