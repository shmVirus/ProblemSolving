#include <iostream>
#include <cmath>
int main (void) {
    int n, k;
    std:: cin >> n >> k;
    std:: string s;
    std:: cin >> s;
    int gr=-1, in=-1;
    for (int i=0; s[i]!='\0'; i++) {
        if (gr != -1 && in != -1) break;
        if ( s[i] == 'G') gr = i;
        if ( s[i] == 'T') in = i;
    }
    if ( abs(gr-in)%k != 0 ) {
        std:: cout << "NO\n";
        return 0;
    }
    else {
        if (gr > in) {
            gr = gr + in;
            in = gr - in;
            gr = gr - in;
        }
        gr += k;
        for (gr; gr<=in; gr=gr+k) {
            if ( s[gr] == '#') {
                std:: cout << "NO\n";
                return 0;
            }
        }
        std:: cout << "YES\n";
    }
    return 0;
}
