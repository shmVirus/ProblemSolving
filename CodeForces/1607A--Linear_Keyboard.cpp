#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 1

void solution () {
    string k, s; cin >> k >> s;
    int ans = 0;
    for (int i=1; i<s.length(); ++i) {
        int index1 = k.find(s[i]);
        int index2 = k.find(s[i-1]);
        ans += abs(index1 - index2);
    }
    cout << ans << nl;
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}

