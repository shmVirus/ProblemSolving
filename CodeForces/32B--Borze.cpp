#include <iostream>
int main (void) {
    std:: string s;
    std:: cin >> s;
    for (int i=0; s[i]!='\0'; i++) {
        if (s[i]=='.') std:: cout << "0";
        if (s[i]=='-' && s[i+1]=='.') {
            i++;
            std:: cout << "1";
        }
        if (s[i]=='-' && s[i+1]=='-') {
            i++;
            std:: cout << "2";
        }
    }
    std:: cout << std:: endl;
    return 0;
}
