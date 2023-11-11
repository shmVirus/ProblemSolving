#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 0

void solution () {
    int n; cin >> n;
    vector<int> v(n);
    for(int i=0, x; i<n; ++i) {
        cin >> x;
        if(x == -1) v[i] = -1;
        else v[i] = x - 1;
    }
    int res = 0;
    for(int i=0; i<n; ++i) {
        int depth = 0, j = i;
        while(v[j] != -1){
            j = v[j];
            depth++;
        }
        res = max(res, depth);
    }
    cout << res + 1 << nl;
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
