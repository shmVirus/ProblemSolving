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
    long long a[n], b=0;
    for (int i=0; i<n; i++) {
        cin >> a[i];
        a[i] += b;
        b = max(b,a[i]);
        cout << a[i] << (i+1==n? "\n" : " ");
    }
}
