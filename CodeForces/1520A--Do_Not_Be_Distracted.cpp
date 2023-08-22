#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 1

void solution () {
    int n; cin >> n; string s; cin >> s;
    bool tasks[26] = {false}, sus = false;

    for (int i=0; i<n && !sus; ++i) {
        int t = s[i]-'A';
        if (tasks[t] && t != s[i-1]-'A') sus = true;
        tasks[t] = true;
    }
    cout << (sus ? "NO" : "YES") << nl;
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
