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
    int n, k; cin >> n >> k; int a[n];
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    sort(a, a+n);
    int i=0, x=0;
    while(k--) {
        while (i<n && a[i]-x<=0) i++;
        cout << (i==n? 0 : a[i]-x) << '\n';
        x += a[i]-x;
    }
}
