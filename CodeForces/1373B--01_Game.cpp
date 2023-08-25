#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 1

void solution () {
    string s; cin >> s;
    int cnt = 0;
    for(int i=0; i<s.size(); ++i) cnt += (s[i] == '0');
    cout << (min(cnt, (int)s.size() - cnt) % 2 ? "DA" : "NET") << nl;
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
