#include <iostream>
#include <cmath>
int main (void) {
    std:: string s;
    std:: cin >> s;
    int a=0;
    for (int i=0, j=97; s[i]!='\0'; i++) {
        int d = abs(int(s[i])-j);
        if ( d >= 13 ) a += 26 - d;
        else a = a+d;
        j = int(s[i]);
    }
    std:: cout << a << std:: endl;
    return 0;
}
