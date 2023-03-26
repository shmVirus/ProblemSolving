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
    int t; cin >> t;
    while (t--) {
        int n; cin >> n; int a[n];
        for (int i=0; i<n; i++) {
            cin >> a[i];
            if(a[i]==1) a[i]++;
        }
        for (int i=1; i<n; i++) {
            if(a[i]%a[i-1]==0) a[i]++;
        }
        for (int i=0; i<n; i++) {
            cout << a[i];
            cout << (i+1==n? "\n" : " ");
        }
    }
}
