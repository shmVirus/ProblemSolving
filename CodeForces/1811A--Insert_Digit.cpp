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
    int n,d; string s;
    test {
        cin >> n >> d >> s;
        for (int i=0; i<n; i++) {
            if (s[i]-48>=d) {
                cout << s[i];
            } else {
                cout << d; d=-1;
                for (int j=i; j<n; j++) {
                    cout << s[j];
                }
                cout << nl; break;
            }
        }
        if (d != -1) cout << d << nl;
    }
}
