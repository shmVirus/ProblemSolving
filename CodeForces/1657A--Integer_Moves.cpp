// author: @shmVirus; Sabbir < sabbir@disroot.org >

#include <bits/stdc++.h>
using namespace std;

#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define nl "\n"
#define test int tc; cin>>tc; for(int cs=1;cs<=tc;cs++)

void solution();

int main (void) {
    FastIO;
    solution();
    return 0;
}
void solution () {
    test {
        int x,y; cin >> x >> y;
        if (x==0 && y==0) cout << 0 << nl;
        else if ((int)sqrt(x*x+y*y) == sqrt(x*x+y*y)) cout << 1 << nl;
        else cout << 2 << nl;
    }
}
