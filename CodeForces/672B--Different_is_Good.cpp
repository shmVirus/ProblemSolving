#include <iostream>
int main (void) {
    int n, c[26]={0}, x=0; std::cin >> n;
    std::string s; std::cin >> s;
    for (int i=0; s[i]!='\0' && n<=26; i++) {
        c[s[i]-'a']++;
    }
    for (int i=0; i<26; i++) {
        if (c[i]>1) x += c[i] - 1;
    }
    std::cout << (s.length()-x<=26? x : -1) << std::endl;
    return 0;
}
