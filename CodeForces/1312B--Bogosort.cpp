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
    int t, n; cin >> t;
    while (t--) {
        cin >> n; int a[n];
        for(int i=0; i<n; i++) {
            cin >> a[i];
        }
        sort(a, a+n, greater<int>());
        for(int i=0; i<n; i++) {
            cout << a[i] << (i+1==n? "\n" : " ");
        }
    }
}
