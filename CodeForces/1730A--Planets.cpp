#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 1

void solution () {
    int n, c; cin >> n >> c;
    vector<int> a(n);
    map<int, int> mp;
    int ans = 0;
    for(int i=0; i<n; ++i){
        cin >> a[i];
        mp[a[i]]++;
        if(mp[a[i]] <= c) ++ans;
    }
    cout << ans << nl;
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
