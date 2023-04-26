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
    int t,n; cin >> t; string a,b;
    while (t--) {
        cin >> n; cin >> a >> b;
        bool d=false;
        for (int i=0; i<n && !d; i++) {
            if (a[i]==b[i] || a[i]=='G'&&b[i]=='B' || a[i]=='B'&&b[i]=='G') continue;
            else d=true;
        }
        cout << (d? "NO" : "YES") << "\n";
    }
}
