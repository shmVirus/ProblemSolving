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
    test {
        int n,k; cin >> n >> k; bool f=false;
        for (int i=0; i<n && !f; i++) {
            int j = n-i;
            if (i*(i-1)/2 + j*(j-1)/2 == k) {
                cout << "YES\n"; f=true;
                while (i--) cout << 1 << " ";
                while (j--) cout << -1 << " \n"[j == 0];
            }
        } if (!f) cout << "NO\n";
    }
}
