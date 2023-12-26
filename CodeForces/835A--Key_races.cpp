#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 0

void solution () {
    int s, v1, v2, t1, t2;
    cin >> s >> v1 >> v2 >> t1 >> t2;
    int p1 = s * v1 +  2 * t1;
    int p2 = s * v2 +  2 * t2;
    cout <<  ( p1 == p2 ? "Friendship" : ( p1 < p2 ? "First" : "Second" ) ) << nl;
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
