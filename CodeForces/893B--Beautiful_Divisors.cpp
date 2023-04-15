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
    int n,s=1; cin >> n;
    for (int i=1; i<=8; i++) {
        int x = (pow(2,i)-1)*(pow(2,(i-1)));
        if (n%x==0) s=x;
    }
    cout << s << '\n';
}
