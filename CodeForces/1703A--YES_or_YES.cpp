#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 1

void solution () {
    string s; cin >> s;

    if ((s[0]=='y' || s[0]=='Y') && (s[1]=='e' || s[1]=='E') && (s[2]=='s' || s[2]=='S')) {
        cout << "YES" << nl;
    } else {
        cout << "NO" << nl;
    }
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
