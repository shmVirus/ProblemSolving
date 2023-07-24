#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 1

void solution () {
    char c; string s;
    int col = -1;
    for (int i=1; i<=8; ++i) {
        for (int j=1; j<=8; ++j) {
	    cin >> c;
	    if (c != '.') {
                if (j==col || col==-1) {
                    s.push_back(c);
		    col = j;
		}
	    }
	}
    }
    cout << s << nl;
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
