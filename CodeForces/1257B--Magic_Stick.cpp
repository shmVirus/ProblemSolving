// author: @shmVirus; Sabbir < sabbir@disroot.org >

#include <bits/stdc++.h>
using namespace std;
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
void solution();

int main (void) {
    FastIO;
    solution();
    return 0;
}
void solution () {
    int t,x,y; cin >> t;
    while (t--) {
        cin >> x >> y;
        cout << (x>3? "YES" : (x==1 && y==1? "YES" : (x>=2 && y<4? "YES" : "NO"))) << '\n';
    }
}
