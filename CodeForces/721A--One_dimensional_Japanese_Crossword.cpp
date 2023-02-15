#include <iostream>
int main (void) {
    int n;
    std:: string s;
    std:: cin >> n >> s;
    int a[n];
    int c=0;
    for (int i=0, j=0; s[i]!='\0'; i++) {
        if (s[i]=='B') {
            j++;
        } else if (s[i]=='W' && j!=0) {
            a[c++] = j;
            j = 0;
        } if (s[i]=='B' && s[i+1]=='\0') {
            a[c++] = j;
        }
    }
    std:: cout << c << std:: endl;
    for (int i=0; i<c; i++) {
        std:: cout << a[i];
        (i+1 == c)? printf("\n") : printf(" ");
    }
    return 0;
}
