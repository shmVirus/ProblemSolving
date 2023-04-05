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
    int t,n,a; cin >> t;
    while (t--) {
        cin >> n;
        int s=0; bool o=false, e=false;
        while (n--) {
            cin >> a; s += a;
            o |= a%2!=0;
            e |= a%2==0;
        }
        cout << (s%2 || (o && e)? "YES\n" : "NO\n");
    }
}
