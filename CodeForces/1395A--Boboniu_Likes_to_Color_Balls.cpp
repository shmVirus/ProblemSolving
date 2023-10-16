#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 1

void solution () {
    int r, g, b, w, odd=0;
    cin >> r >> g >> b >> w;
    odd = r%2 + g%2 + b%2 + w%2;
    if ( odd > 1 && (r>0 && g>0 && b>0)) {
        r -= 1; g -= 1; b -= 1; w += 3;
        odd = r%2 + g%2 + b%2 + w%2;
    }
    cout << (odd > 1 ? "No" : "Yes") << nl;
}

int main (void) {
    //FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
