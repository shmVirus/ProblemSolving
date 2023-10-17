#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 1

void solution () {
    int n, c=0; cin >> n;
    string s; cin >> s;
    for (int i=0; i<n; ++i) {
        if (s[i]=='Q') ++c;
        else --c;
        if (c < 0) c = 0;
    }
    cout << (c==0 ? "Yes" : "No") << nl;
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
