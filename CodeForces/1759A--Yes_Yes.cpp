#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 1

void solution () {
    string s; cin >> s;
    bool sub = true;
    int l = s.length();
    if (l == 1) {
        if(s[0] != 'Y' && s[0] != 'e' && s[0] != 's') sub = false;
        else sub = true;
    } else if (l == 2) {
        if(s == "Ye" || s == "es" || s == "sY") sub = true;
        else sub = false;
    } else {
        for (int i=2; i<l; ++i) {
            if (s[i-2] == 'Y' && s[i-1] == 'e' && s[i] == 's') continue;
            if (s[i-2] == 'e' && s[i-1] == 's' && s[i] == 'Y') continue;
            if (s[i-2] == 's' && s[i-1] == 'Y' && s[i] == 'e') continue;
            else {
                sub = false;
                break;
            }
        }
    }
    cout << (sub ? "YES" : "NO") << nl;
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
