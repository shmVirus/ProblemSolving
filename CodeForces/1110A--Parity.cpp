#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 0

void solution () {
    int b, k; cin >> b >> k;
    long long a = 0;
    for (int i=0,x; i<k; ++i) {
        cin >> x;
        a = (a*b+x)%2;
    }
    cout << (a ? "odd" : "even") << nl;
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
