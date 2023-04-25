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
    long long int t,n,k; cin >> t;
    while (t--) {
        cin >> n >> k;
        if (n%2==k%2 && k*k<=n) cout << "YES\n";
        else cout << "NO\n";
    }
}
