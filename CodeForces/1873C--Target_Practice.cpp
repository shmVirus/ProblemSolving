#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 1

void solution () {
    int ans = 0;
    for (int i=0; i<10; ++i) {
        for (int j=0; j<10; ++j) {
            char c; cin >> c;
            if (c == 'X') {
                if ( i==0 || i==9 || j==0 || j==9 ) ans += 1;
                else if ( i==1 || i==8 || j==1 || j==8 ) ans += 2;
                else if ( i==2 || i==7 || j==2 || j==7 ) ans += 3;
                else if ( i==3 || i==6 || j==3 || j==6 ) ans += 4;
                else if ( i==4 || i==5 || j==4 || j==5 ) ans += 5;
            }
        }
    }
    cout << ans << nl;
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
