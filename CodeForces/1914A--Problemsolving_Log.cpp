#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 1

void solution () {
    int n; cin >> n;
    string s; cin >> s;
    int a[26] = {0}, ans = 0;
    for (int i=0; s[i]!='\0'; ++i) {
        ++a[s[i]-'A'];
    }
    for (int i=0; i<26; ++i) {
        if (a[i] >= i+1) {
            ++ans;
        }
    }
    cout << ans << nl;
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
