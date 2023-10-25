#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 1

void solution () {
    int n, k; cin >> n >> k;
    string s; cin >> s;
    int cnt[26]={0}, odd=0;
    for (int i=0; s[i]!='\0'; ++i) { ++cnt[s[i]-'a']; }
    for (int i=0; i<26; ++i) { odd += cnt[i]%2; }
    cout << (odd-k <= 1 ? "YES" : "NO") << nl;
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
