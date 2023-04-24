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
    int q, n,t; cin >> q;
    while (q--) {
        cin >> n >> t;
        int a[n], b[n], s=-1, v=-1;
        for (int i=0; i<n; i++) {
            cin >> a[i];
        }
        for (int i=0; i<n; i++) {
            cin >> b[i];
        }
        for (int i=0; i<n && t>0; i++) {
            if (a[i]<=t && b[i]>v) {
                s=i+1;
                v=b[i];
            }
            t--;
        }
        cout << s << "\n";
    }
}
