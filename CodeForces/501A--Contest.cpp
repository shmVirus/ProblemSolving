#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 0

int points (int p, int t) {
    return max(3*p/10 , p-(p*t)/250);
}

void solution () {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int mis = points(a, c);
    int vas = points(b, d);
    cout << ( vas > mis ? "Vasya" : (vas < mis ? "Misha" : "Tie") ) << nl;
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
