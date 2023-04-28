// author: @shmVirus; Sabbir < sabbir@disroot.org >

#include <bits/stdc++.h>
using namespace std;

#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define nl "\n";
#define test int tc; cin>>tc; for(int cs=1;cs<=tc;cs++)

void solution();

int main (void) {
    FastIO;
    solution();
    return 0;
}
void solution () {
    int n, s=0; cin >> n; int a[n], b[n];
    for (int i=0; i<n; i++) {
        cin >> a[i] >> b[i];
    }
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (a[i]==b[j]) s++;
        }
    }
    cout << s << nl;
}
