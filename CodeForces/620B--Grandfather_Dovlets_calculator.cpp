// author: @shmVirus; Sabbir < sabbir@disroot.org >

#include <bits/stdc++.h>
using namespace std;
#define FastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
void solution();

int main (void) {
    FastIO;
    solution();
    return 0;
}
void solution () {
    int a, b, x; cin >> a >> b;
    int s=0, cnt[10]={6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    for (a; a<=b; a++) {
        x = a;
        while (x > 0) {
            s += cnt[x%10];
            x /= 10;
        }
    }
    cout << s << '\n';
}
