#include <bits/stdc++.h>
using namespace std;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl      "\n"
#define MULTITEST 1

void solution () {
    long long xa, pa, xb, pb; char a;
    cin >> xa >> pa >> xb >> pb;
    int mn = min(pa, pb);
    pa -= mn; pb -= mn;
    if (pa >= 7) a = '>';
    else if (pb >= 7) a = '<';
    else {
        while (pa--) xa *= 10;
        while (pb--) xb *= 10;
        if (xa > xb) a = '>';
        else if (xa < xb) a = '<';
        else a = '=';
    }
    cout << a << nl;
}

int main (void) {
    FastIO;
    int tc=1; if (MULTITEST) cin>>tc;
    for(int cs=1;cs<=tc;cs++) solution();
    return 0;
}
