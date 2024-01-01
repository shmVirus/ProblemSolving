#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 1

void solution () {
    int cntA=0, cntB=0, cntC=0;
    for (int i=0; i<3; ++i) {
        for (int j=0; j<3; ++j) {
            char c; cin >> c;
            if (c == 'A') ++cntA;
            else if (c == 'B') ++cntB;
            else if (c == 'C') ++cntC;
        }
    }
    char ans;
    if (cntA < 3) ans = 'A';
    else if (cntB < 3) ans = 'B';
    else if (cntC < 3) ans = 'C';
    cout << ans << nl;
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
