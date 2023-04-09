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
    int n; cin >> n;
    int a[n], l=0,r=0;
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    for (int i=0; i<2*n; i++) {
        if (a[i%n]==1) {
            l++;
            r = max(r,l);
        } else {
            l=0;
        }
    }
    cout << r << '\n';
}
