#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 1

void solution () {
    int n, a, b; cin >> n;
    int winner, quality = -1;

    for (int i=1; i<=n; ++i) {
        cin >> a >> b;
	if (a <= 10 && b > quality) {
	    winner = i;
	    quality = b;
	}
    }

    cout << winner << nl;
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
