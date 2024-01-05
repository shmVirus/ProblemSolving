#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 1

void solution () {
    int mxR = -1; char ch;
    for (int i = 0; i < 8; ++i) {
        int cntR = 0;
        for (int j = 0; j < 8; ++j) {
            cin >> ch;
            if ( ch == 'R' ) ++cntR;
        }
        mxR = max(mxR, cntR);
    }
    cout << ( mxR == 8 ? "R" : "B" ) << nl;
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
