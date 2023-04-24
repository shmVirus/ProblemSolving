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
    long long int t,n; cin >> t;
    while (t--) {
        cin >> n;
        long long int a[n];
        for (int i=0; i<n; i++) {
            cin >> a[i];
        }
        sort(a, a+n);
        cout << max(a[0]*a[1], a[n-2]*a[n-1]) << "\n";
    }
}
