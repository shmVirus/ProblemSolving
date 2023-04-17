// author: @shmVirus; Sabbir < sabbir@disroot.org >

#include <bits/stdc++.h>
using namespace std;

#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl cout << "\n";
#define no cout << "NO\n";
#define yes cout << "YES\n";

void solution();

int main (void) {
    FastIO;
    solution();
    return 0;
}
void solution () {
    int t; cin >> t;
    while (t--) {
        int s; cin >> s;
        int a=s, b=0;
        while(s/10) {
            b = s/10;
            s = s%10 + b;
            a += b;
        }
        cout << a << '\n';
    }
}
