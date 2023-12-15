#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 1

void solution () {
    string s; cin >> s;
    vector<int> cnt(10);
    for (auto c : s) ++cnt[c - '0'];
    int mx = *max_element(cnt.begin(), cnt.end());
    if (mx == 4) cout << -1;
    else if (mx == 3) cout << 6;
    else cout << 4;
    cout << nl;
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
