#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 1

void solution () {
    int n; cin >> n;
    vector<int> cnt(26);
    for (int i = 0; i < n; ++i) {
        string s; cin >> s;
        for (char ch : s) {
            ++cnt[ch - 'a'];
        }
    }
    bool ans = true;
	for (int i = 0; i < 26 && ans; ++i) {
		if (cnt[i] % n != 0) ans = false;
	}
    cout << (ans ? "YES" : "NO") << nl;
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
