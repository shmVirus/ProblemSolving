#include <iostream>
int main (void) {
    int n;
    std:: string ln;
    std:: cin >> n >> ln;
    int a=0, b=0;
    for (int i=0; ln[i]!='\0'; i++) {
        int d = ln[i] - '0';
        if (d == 4 || d == 7) {
            if (i<n/2) a += d;
            else b += d;
        } else {
            std:: cout << "NO\n";
            return 0;
        }
    }
    if ( a == b ) std:: cout << "YES\n";
    else std:: cout << "NO\n";
    return 0;
}
