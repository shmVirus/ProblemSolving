#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 1

void solution () {
    int n; cin >> n;
    int l[100+1]={0};

    for (int i=0; i<n; ++i) {
        int x; cin >> x;
        x < n ? l[x]++ : l[n] = INT_MAX;
    }

    bool g = true;
    for (int i=1; i<=n; ++i) {
        if (l[i] > l[i-1]) {
            g = false;
            break;
        }
    }
    cout << (g ? "YES" : "NO") << nl;
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}

