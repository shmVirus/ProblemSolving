// author: @shmVirus; Sabbir < sabbir@disroot.org >

#include <bits/stdc++.h>
using namespace std;

#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define nl cout << "\n";
#define no cout << "NO\n";
#define yes cout << "YES\n";

void solution();

int main (void) {
    FastIO;
    solution();
    return 0;
}
void solution () {
    int q, l,r, on,en,a,b, s; cin >> q;
    while (q--) {
        cin >> l >> r;
        on = r-l;
        en = on/2;
        if (l%2==0 || r%2==0) en++;
        on = on+1-en;
        l%2? (a=l,b=l+1) : (a=l+1,b=l);
        s = ((float)en/2*(2*b+(en-1)*(2))) - ((float)on/2*(2*(a)+(on-1)*(2)));
        cout << s << '\n';
    }
}
