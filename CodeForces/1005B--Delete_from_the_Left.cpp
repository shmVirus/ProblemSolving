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
    string s, t; cin >> s >> t;
    int w=0, i,j;
    while (true) {
        i=s.length()-w-1;
        j=t.length()-w-1;
        if (i>=0 && j>=0 && s[i]==t[j]) w++;
        else break;
    }
    cout << s.length() + t.length() - 2*w << '\n';
}
