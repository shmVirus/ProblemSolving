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
    int a,b,c; cin >> a >> b >> c;
    bool s=false;
    for (int i=0; i<=c/a && !s; i++) {
        if ((c-i*a)%b==0) s=true;
    }
    cout << (s? "YES" : "NO") << '\n';
}
