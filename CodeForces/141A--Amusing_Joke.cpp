#include <iostream>
int main (void) {
    std:: string a, b, c;
    std:: cin >> a >> b >> c;
    int cnt[26] = {0};
    for (int i=0; a[i]!='\0'; i++) {
        cnt[a[i]-'A']++;
    }
    for (int i=0; b[i]!='\0'; i++) {
        cnt[b[i]-'A']++;
    }
    for (int i=0; c[i]!='\0'; i++) {
        cnt[c[i]-'A']--;
    }
    for (int i=0; i<26; i++) {
        if (cnt[i]!=0) {
            std:: cout << "NO\n";
            return 0;
        }
    }
    std:: cout << "YES\n";
    return 0;
}
