#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 1

void solution () {
    int n, x; cin >> n;
    vector<int> seq(n);

    int l = 0;
    int r=(n%2 ? n-2 : n-1);
    for (int i=1, half=(n+1)/2; i<=n; ++i) {
        cin >> x;
        if (i <= half) {
            seq[l] = x;
            l += 2;
        } else {
            seq[r] = x;
            r -= 2;
        }
    }

    for (int i=0; i<n; ++i) {
        cout << seq[i] << " \n"[i+1==n];
    }
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
