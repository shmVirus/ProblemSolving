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
    string s; cin >> s;
    int c=0, n=(int) s.size();
    for (int i=0; s[i]!='\0'; i++) {
        c += (s[i]=='a');
    }
    if ( (n-c)%2 ) {
        cout << ":(\n";
        return;
    }
    string t = s.substr(0, c+(n-c)/2);
    string w = t;
    for (int i=0; t[i]!='\0'; i++) {
        if (t[i] != 'a') w.push_back(t[i]);
    }
    cout << (w==s? t : ":(") << '\n';
}
