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
    int n, s=0; cin >> n; int g[n];
    for (int i=0; i<n; i++) {
        cin >> g[i];
        s += g[i];
    }
    if ((float)s/n >= 4.5) cout << "0\n";
    else {
        sort(g, g+n);
        for (int i=0; i<n; i++) {
            s += 5-g[i];
            if ((float)s/n >= 4.5) {
                cout << i+1 << '\n';
                break;
            }
        }
    }
}
