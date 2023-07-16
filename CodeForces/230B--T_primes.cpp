#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 1

void solution () {
    long long int x, sq, i; cin >> x;
    sq = sqrt(x);
    for (i=2; i*i<sq; ++i) {
        if (x%i == 0) break;
    }
    cout << (i*i>sq && sq*sq==x && x>1? "YES" : "NO" ) << nl;
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
