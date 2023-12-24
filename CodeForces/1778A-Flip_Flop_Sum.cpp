#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 1

void solution () {
    int n; cin >> n;
    int s=0, c=0, l;
    cin >> l; s += l;
    for (int i=1, x; i<n; ++i) {
        cin >> x;
        if ( x == l && x == -1 ) c = 2;
        s += x;
        l = x;
    }
    if ( s == n ) s -= 4;
    else if ( c == 2 ) s += 4;
    cout << s << nl;
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
