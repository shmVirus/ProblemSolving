// author: @shmVirus; Sabbir < sabbir@disroot.org >

#include <bits/stdc++.h>
using namespace std;

#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define NL cout << "\n";
#define NO cout << "NO\n";
#define YES cout << "YES\n";

void solution();

int main (void) {
    FastIO;
    solution();
    return 0;
}
void solution () {
    int n,m, s=0; cin >> n >> m;
    while (n>0) {
        s++; n--;
        if (s%m==0) n++;
    }
    cout << s << "\n";
}
