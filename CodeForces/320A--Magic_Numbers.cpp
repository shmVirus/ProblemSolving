#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 0

void solution () {
    string s; cin >> s;
    bool magic = true;
    for (int i=0; i<s.size() && magic; ++i) {
		if (s[i] != '1' && s[i] != '4') magic = false;
    }
    if (s[0] == '4') magic = false;
	if (s.find("444") != s.npos) magic = false;

    cout << (magic ? "YES" : "NO") << nl;
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
