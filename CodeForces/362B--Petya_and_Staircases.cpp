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
    int n, m; cin >> n >> m;
    int d[m]; bool unr = false;
    for (int i=0; i<m && !unr; i++) {
        cin >> d[i];
        if (d[i] == 1 || d[i]==n) unr = true;
    }
    sort(d, d+m);
    for (int i=0; i<m-2 && !unr; i++) {
        if (d[i+2]-d[i+1]==1 && d[i+1]-d[i]==1) unr = true;
    }
    cout << (unr? "NO\n" : "YES\n");
}
