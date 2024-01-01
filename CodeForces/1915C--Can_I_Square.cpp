#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 1

void solution () {
    int n; cin >> n;
    long long s = 0, a;
    for (int i=0; i<n; ++i) {
        cin >> a;
        s += a;
    }
    long long srt = sqrt(s);
    cout << ( srt*srt == s ? "YES" : "NO" ) << nl;
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
